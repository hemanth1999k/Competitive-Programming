#include<iostream>
using namespace std;

class Solution{

public:
  int util(vector<int> &nums,vector<int> &mem){
    int N = nums.size();
    for(int k=N-1;k>=0;k--){
      if(k+2<N){
	int maxi = nums[k];
	for(int i=k+2;i<N;i++)
	  maxi = max(maxi,mem[i]+nums[k]);
	mem[k] = maxi;
        
      }
      else
	  mem[k] = nums[k];
      }
    return std::max(mem);
    
  }
   int rob(vector<int>& nums) {
     int k =0;
     
     vector<int> mem(nums.size(),0);
     int k = util(0,nums);
     return k;
   }
  
}
