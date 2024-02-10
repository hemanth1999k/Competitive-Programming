class Solution {
public:
  
  bool cyclePresent(int n,vector<bool> &recur,vector<vector<int>>&graph,vector<bool> &visited){
    
        visited[n] = true;
        recur[n] = true;
        for(auto i:graph[n]){

          if(!visited[i] && cyclePresent(i,recur,graph,visited))
        return true;
             if(recur[i])
        return true;

        }
    
    recur[n] = false;
    return false;
   }

  
   bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      
      vector<vector<int>> graph(numCourses);
       
       for(auto courses : prerequisites)
            graph[courses[1]].push_back(courses[0]);
       
      vector<bool> visited(numCourses,false);
      vector<bool> recur(numCourses,false);
        
      for(int i=0;i<numCourses;i++){
    	if(cyclePresent(i,recur,graph,visited))
	       return false;
        }
      return true;
    }
};
