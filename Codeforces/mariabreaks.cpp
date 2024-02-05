#include <bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
class Solution{
public:
	
	void run(){
		int n,m;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];

		sort(arr.begin(),arr.end());
		int count = n;
		for(int i=n-1;i>=0;i--){
			// cout<<(arr[i]>count)<<arr[i]<<endl;
			if(arr[i]>count){
				count--;

			}
			else{
				break;
			}
		}
		cout<<count+1<<endl;
			
	}
};

int main(){
	freopen("input.txt","r",stdin);
	Solution s;
	int t;
	cin>>t;
	while(t--){
		s.run();
	}
}