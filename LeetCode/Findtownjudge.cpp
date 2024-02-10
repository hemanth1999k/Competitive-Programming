class solution{
  public:
    int findJudge(int N, vector<vector<int>>& trust) {
      int degrees[N][2]=0; //0-indegree 1-outdegree
      for(auto edge:trust){
	degrees[edge[1]-1][0]++;
	degrees[edge[0]-1][1]++;
      }
      
      int notrusters =0;
      vector<int> notrusterid;
      for(int i=0;i<n;i++)
	if(degrees[i][0] == n-1 && degrees[i][1]==0){
	  notrusters++;
	  notrusterid.push_back(i);
	}
      int k=0;
      
      if(notrusters==1){
	return notruster[0]+1;
      }else{
	return -1;
      }
      
    }
  
}
