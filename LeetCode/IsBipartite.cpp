#include <iostream>
using namespace std;

class Solution{
public:
  bool isBipartite(vector<vector<int>>& graph){
    int n = graph.length;
    vector<int> colors(n,0);
    vector<bool> visited(n,false);
    queue<int> Q;
    Q.push_back(0);
    
    while(!Q.empty()){
      int current = Q.front();
      Q.pop();
      if(colors[current] ==0 || colors[current] ==1 ){
	colors[current] = 1;//red 1 black 2
	visited[current] = true;
	for(int x:graph[current]){
	  if(colors[x] == 0){
	    colors[x] = 2;
	    if(!visited[x])
	      Q.push(x);
	    
	  }
	  else if(colors[x] == 1)
	    return false;
	  
	}
	else if(colors[current]==2){
	  for(int x:graph[current]){
	    if(colors[x]==0){
	      colors[x]=1;
	      if(!visited[x])
		Q.push(x);
	    }
	    else if(colors[x]==2)
	      return false;
	  }
	}
	
      }
      
    }
    for(auto x:visited)
      if(!x):
	return false;
    return true;
    
  }
}
