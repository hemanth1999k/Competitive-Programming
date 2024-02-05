public class TestClass {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
        int T = Integer.parseInt(br.readLine().trim());
        for(int t_i = 0; t_i < T; t_i++)
        {
            int N = Integer.parseInt(br.readLine().trim());
            String[] arr_val = br.readLine().split(" ");
            int[] val = new int[N];
            for(int i_val = 0; i_val < arr_val.length; i_val++)
            {
                val[i_val] = Integer.parseInt(arr_val[i_val]);
            }
            String[] arr_parent = br.readLine().split(" ");
            int[] parent = new int[N-1];
            for(int i_parent = 0; i_parent < arr_parent.length; i_parent++)
            {
                parent[i_parent] = Integer.parseInt(arr_parent[i_parent]);
            }

            int[] out_ = solve(N, val, parent);
            System.out.print(out_[0]);
            for(int i_out_ = 1; i_out_ < out_.length; i_out_++)
            {
                System.out.print(" " + out_[i_out_]);
            }
            
            System.out.println();
            
         }

         wr.close();
         br.close();
    }
    static int[] solve(int N, int[] val, int[] parent){
       // Write your code here
        int[] result = new int[val.length];
        ArrayList<ArrayList<Integer>> temp = new ArrayList<>();
        ArrayList<Integer> curr = new ArrayList<>();

        if(val[0]==1)
            curr.add(2);
        else{
            curr.add(1);
            curr.add(val[0]);
        }
        result[0]=curr.get(0);
        temp.add(new ArrayList<>(curr));
        for(int i=1;i<val.length;i++){

            int parentIndex = parent[i-1]-1;
            curr = new ArrayList<>(temp.get(parentIndex));
            int nodeValue = val[i];
            boolean enter = false;
            while(curr.size()>0 && nodeValue == curr.get(0)){
                curr.remove(0);
                nodeValue++;
                enter=true;
            }
            if(curr.isEmpty())
                curr.add(nodeValue);
            else if(!curr.isEmpty() && curr.contains(nodeValue) ==false && (enter|| curr.get(0)<nodeValue))
                curr.add(nodeValue);

            Collections.sort(curr);
            temp.add(new ArrayList<>(curr));
            result[i]=curr.get(0);
        }

        return result;
    
    }
}
