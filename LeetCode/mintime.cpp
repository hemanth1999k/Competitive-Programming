class Solution {
public:
  int routePath(int p,vector<vector<int>> &graph,vector<bool>&visited, vector<bool>& hasit){
    int time = 0;
    visited[p] = true;
    
    for(int i=0;i<graph[p];i++){
      int index = graph[p][i];
      if(!visited(index)){
        int k = routePath(index,graph,visited,hasit);
        if(k>0 && hasit[index] == false)
           time =time+k+2;
          
        else if(k==0 && hasit[index]==true)
          time = time+ k+ 2;
      }
    }
    return time;
  }
  int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
    int count = 0;
    vector<bool> visited(n,false);
    vector<vector<int>> graph(n);
    for(auto edge:edges){
      graph[edge[0]].push_back(edge[1]);
      graph[edge[1]].push_back(edge[0]);
    }

    return routePath(0,graph,visited,hasApple);
  }
};
