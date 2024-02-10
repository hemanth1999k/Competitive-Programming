class Solution {
public:
  
  bool dfs(int i,vector<vector<int>> &graph,vector<int> &visited){
      if(visited[i]==0)
        visited[i] = -1;
      
      for(auto x:graph[i]){
          if(visited[x] == visited[i]) return false;
          
          if(visited[x]==0){
              visited[x]=-visited[i];
              if(!dfs(x,graph,visited))
                  return false;
              }
      }
      return true;
  }
    
  bool isBipartite(vector<vector<int>>& graph){
    int n = graph.size();
    vector<int> visited(n,0);
    
    for(int i=0;i<n;i++){
        if (visited[i] != 0) continue;
        
            if(!dfs(i,graph,visited)) return false;
    }
    return true;
  }  
};
