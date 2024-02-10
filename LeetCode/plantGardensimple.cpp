vector<int> gardenNoAdj(int N,vector<vector<int>>& paths){
   vector<vector<int>> graph(N);
       for(auto path:paths){
           graph[path[0]-1].push_back(path[1]-1);
           graph[path[1]-1].push_back(path[0]-1);
       }
       vector<int> planted(N);
       for(int i=0;i<N;i++){
	 vector<int> plants{1,2,3,4};
	 for(auto x:graph){
	   if(planted[x]!=0)
	     plants.erase(std::remove(begin(plants),end(plants),planted[x]),end(plants));
	 }
	 planted[i] = plants[0];
       }
       return planted;

}
