class Solution {
public:
   int white = 0,gray = 1,black = 2;
  bool possible = true;
  
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
          vector<vector<int>> graph(numCourses);
     vector<vector<int>> depend(numCourses);
     vector<int> courseOrder;
     vector<int> color(numCourses,0);
    
     
     for(auto course:prerequisites){
       graphs[course[1]].push_back(course[0]);
     }

     for(int i=0;i<numCourses;i++){
       if(color[i] == white){
	 DFSUtil(i,graph,color,courseOrder);
       }
     }
     
     if(possible) return courseOrder;
     else return vector<int>();
     
     }

void DFSUtil(int n,vector<vector<int>> &graph,vector<int>&color,vector<int>&courseOrder){
        color[n] = gray;
	if(!possible)
	  return;
	
	for(auto k:graph[n]){
	  if(color[k] == white)
	    DFSUtil(k,graph,color,courseOrder);
	  else if(color[k] == gray)
	    possible = false;
	  
	}
	color[n] = black;
	courseOrder.insert(courseOrder.begin(),n);
}
  
};
