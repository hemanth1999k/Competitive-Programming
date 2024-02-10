class Solution {
public:
      
  int tar;
  int size;
  int start;
  
  int find_start(int s,int t,vector<int>& num){
    
    if(num[s]<num[t])
      return -1;
    if(s<=t){
      int mid =(s+t)/2;
      if(s==0 && t==num.size()-1){
          if(mid==s && num[mid]>=num[t])
            return t;
         else if(mid!=s && num[mid]>=num[t])
            return find_start(mid,t,num);

          else if(mid!=s && num[s]>=num[mid])
            return find_start(s,mid,num);
          else
            return -1;
      }else{
          cout<<s<<" "<<mid<<" "<<t<<endl;
          
          if(mid==s && num[s]>=num[t]){
              if(num[s]>num[t])
                  return t;
               else if(num[s] == num[t])
                   return s;              
          }

          else if(mid!=s && num[s]>=num[mid])
            return find_start(s,mid,num);
          
         else if(mid!=s && num[mid]>=num[t])
            return find_start(mid,t,num);

          else
            return -1;
      }
    }else{
      return s;
    }
  }
  int get_real(int k){
    
    return (k+start)%size;
  }
  bool search(vector<int>& nums, int target){
    //check rotated
    if(nums.size()==0)
      return false;
    int n = nums.size()-1;
    start=0;
    size = nums.size();
    if(nums[0]>=nums[n]){
      start = this->find_start(0,nums.size()-1,nums);   
    }
    cout<<start<<endl;
    int s = 0;
    int t = n+1;
    int mid;
   
    if(nums[get_real(mid)]==target)
       return true;
       
    return false;
  }
};
