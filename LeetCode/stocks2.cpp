#include<iostream>
using namespace std;

class Solution{
public:
  int maxProfit(vector<int>& prices){
    int n = prices.size();
    bool sell = false;
    int profit=0,maxprofit=0;
    int minprice = prices[i];
    int maxprice = prices[i];
    for(int i=1;i<n;i++){
      if(prices[i]>maxprice){
	profit = prices[i]-minprice;
	maxprice = prices[i];
      }
      if(prices[i]<maxprice){
	minprice = prices[i];
	maxprice = prices[i];
	maxprofit += profit;
	profit = 0;
      }
    }
    return maxprofit;
    }
    
  }
