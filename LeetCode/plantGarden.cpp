class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
       vector<vector<int>> graph(N);
       for(auto path:paths){
           graph[path[0]-1].push_back(path[1]-1);
           graph[path[1]-1].push_back(path[0]-1);
       }
       queue<int> Q;
       vector<int>gardens(N,0);
       Q.push(0);
       while(!Q.empty()){
	 int x = Q.front();
	 Q.pop();
	 vector<int> remplants{1,2,3,4};
	 if(gardens[x] == 0){
	   gardens[x]==1;
	   vector<int> k{2,3,4};
	   remplants = k;
	 }else{
	   remplants.remove(gardens[x]);
	 }
	 
	 for(auto i:graph[x]){
	   if(gardens[x]!=0)
	     
	 }
       }
       return gardens;
    }
};
