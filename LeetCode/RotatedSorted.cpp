#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  
  int tar;
  int size;
  int start;
  
  int find_start(int s,int t,vector<int>& num){
   
    if(num[s]<num[t])
      return -1;
    if(s<=t){
      int mid =(s+t)/2;
      if(mid==s && num[mid]>num[t])
        return t;
      else if(mid!=s && num[s]>num[mid])
        return find_start(s,mid,num);
      else if(mid!=s && num[mid]>num[t])
        return find_start(mid,t,num);
      else
        return -1;
    }else{
      return s;
    }
  }
  int get_real(int k){
    
    return (k+start)%size;
  }
  int search(vector<int>& nums, int target){
    //check rotated
    if(nums.size()==0)
      return -1;
    int n = nums.size()-1;
    start=0;
    size = nums.size();
    if(nums[0]>nums[n]){
      start = this->find_start(0,nums.size()-1,nums);   
    }
    int s = 0;
    int t = n+1;
    int mid;
    while(s<=t){
      
      mid = (s+t)/2;
      if(nums[get_real(mid)] > target)
        {
          t = mid-1;
        }
      else if(nums[get_real(mid)]<target)
        {
          s = mid+1;
        }
      else
        break;
    }
    //cout<<get_real(s)<<" "<<get_real(t)<<" "<<get_real(mid)<<endl;
    //cout<<"start "<<start<<endl;
    //cout<<"mid "<<get_real(mid)<<" value"<<nums[get_real(mid)]<<endl;
    if(nums[get_real(mid)]==target)
       return get_real(mid);
       
    return -1;
  }
};
int main(){
  Solution s;
  vector<int> kect{3,1};
  int a;
  cin>>a;
  cout<<endl<<s.search(kect,a)<<endl;
  return 0;
}
