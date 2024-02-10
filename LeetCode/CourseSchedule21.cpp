class Solution {
public:


  void DFSUtil(int n,vector<vector<int>> &graph,vector<bool>&visited,vector<int>&courseOrder){
	visited[n] = true;
	courseOrder.push_back(n);
	for(auto k:graph[n]){
	  if(!visited[k])
	    DFSUtil(k,graph,visited,courseOrder);
	  
	}
	courseOrder.push_back(n);
  }


   bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     vector<vector<int>> graph(numCourses);
     vector<vector<int>> depend(numCourses);
     vector<int> finishOrder;
     for(auto course:prerequisites){
       graphs[course[1]].push_back(course[0]);
     }
     for(int i=0;i<numCourses;i++){
       if(!visited[i]){
	 DFSUtil(i,graph,visited,finishOrder);
       }
     }
    }
};
