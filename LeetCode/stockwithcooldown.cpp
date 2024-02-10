#include<iostream>
using namespace std;

class Soltuion{
  public:
    int maxProfit(vector<int>& prices) {
      vector<int> slopeup;
      int maxprofit=0;
      int n = prices.size();
      for(int i=1;i<n;i++){
	  slopeup.push_back(prices[i]-prices[i-1]);
      }
      n = slopeup.size();
      vector<int> util(n,0);
      int maxium = 0;
      for(int i=0;i<n;i++){
	
	if(i-2>=0)
	  util[i] = max(util[i-2],slopeup[i]);
	else
	  util[i] = slopeup[i];

	if(maxium<util[i])
	  maxium = util[i];
      }
      return maxium;
    }

}

class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
      vector<int> slopeup;
      int maxprofit=0;
      int n = prices.size();
     
      vector<int> newslope;
      for(int i=1;i<n;i++){
         
	  slopeup.push_back(prices[i]-prices[i-1]);
      }
       
     
      n = slopeup.size();
      int temp = 0;
      for(int i=0;i<n;i++){
         if(slopeup[i]>0){
             temp+=slopeup[i];
         }else{
             
             newslope.push_back(temp);
             temp = 0;
             
         }
      }
      slopeup = newslope;
      vector<int> util(n,0);
      int maxium = 0;
      for(int i=0;i<n;i++){
        cout<<util[i]<<" "<<slopeup[i]<<endl;
        if(i-2>=0)
          util[i] = max(util[i-2]+slopeup[i],slopeup[i]);
        else
          util[i] = slopeup[i];

        if(maxium<util[i])
          maxium = util[i];
          }
      
      return maxium;
    }
};
// 3 4 5 1 2
