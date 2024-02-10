class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
      vector<pair<long,long>> p;
      for(int i=0;i<nums.size();i++)
	p.push_back({nums[i],i});

      sort(p.begin(),p.end());
      for(int i=0;i<p.size();i++){
	for(int j=i+1;j<p.size() &&  abs(p[i].first-p[j].first)<=t;j++){
	    if(abs(p[i].second-p[j].second)<=k)
	      return true;
	  }
      }
	return false;
      
    }
};
