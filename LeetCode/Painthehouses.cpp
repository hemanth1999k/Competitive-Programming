class Solution {
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
    	int already = 0;
    	int neighbours = 0;
    	int prevcolor = 0;
  		for(auto h:houses){
  			if(h>0){
  				already++;
  				if(prevcolor!=h){
  					prevcolor = h;
  					neighbours++;
  				}
  			}
  		}
  		if(already==0){
  			
  		}else{

  		}
    }
};