#pragma gcc optimize("O3")
class Solution{
public:
  int removeDuplicates(vector<int>&nums){
    int i=0,j;

    for(j=1;j<nums.size();j++){
      if(nums[j]==nums[i])
	continue;
      else{
	nums[++i] = nums[j];
      }
    }
    return i+1;
  }

}
