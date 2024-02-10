#include <iostream>
using namespace std;

class Solution{
public:
  //0 unvisited
  //1 current node
  //2 safe node
  //3 unsafe node
  bool DFS(int i,vector<vector<int>> &graph,vector<int> &state,vector<int> &safes){
    state[i] = 1;
    bool all_vertices = false;
    for(auto x:graph[i]){
      if(state[x] == 0)
	if(!DFS(x,graph,state,safes)){
	  state[i] = 3;
	  return all_vertices;
        }
      
      else if(state[x] == 1){
	state[i] = 3;
        return false;
      }
     else if(state[x]==3){   	
	state[i] = 3;
	return false;
      }
    }
    state[i] = 2;
    safes.push_back(i);
    return true;
  }

  
  vector<int>eventualSafeNodes(vector<vector<int>>&graph){
    int n = graph.size();
    vector<int> states(n,0);
    vector<int> safeNode;
    //0-unvisited 1-unsafe 2-safe
    for(int i=0;i<n;i++){
      if(states[i] == 0){
	DFS(i,graph,states,safeNode);
      }
    }
    sort(safeNode.begin(),safeNode.end());
    return safeNode;
    
  }

}
