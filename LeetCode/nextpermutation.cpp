#include<iostream>
using namespace std;

class Solution{
public:
  
  void nextPermutation(vector<int> &nums){
    if(nums.size()==0)
      return 0;
    bool changed = false;
    int n = nums.size();
    
      
    for(int i= n-1;i>=1;i--){
      if(nums[i] > nums[i-1]){
        int diff = 9999999;
        int index = -1;
        
        for(int j = i;j<n;j++){
          if(diff> nums[j] - nums[i-1])
            {
              diff = nums[j] - nums[i-1];
              index = j;
            }
          else if(nums[i-1] > nums[index])
            break;
        }
        if(index>-1){
          swap(nums[i-1], nums[j]);
          sort(nums.begin()+i,nums.end());
          break;
        }
      }
    }
  }

}
