

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<array<int,2>> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        } 
        int l=0,r = nums.size()-1;
        sort(arr.begin(),arr.end());
        while(l<r){
            if(arr[l][0] + arr[r][0] > target){
                r--;
            }else if(arr[l][0] + arr[r][0] < target){
                l++;
            }else{
                return vector<int>{arr[l][1],arr[r][1]};        
            }
        }
               
    }
};
