#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	// freopen("input.txt","r",stdin);
	cin>>t;

	while(t--){
		int x;
		cin>>x;
		vector<int> arr(2*x);
		for(int i=0;i<2*x;i++)
			cin>>arr[i];

		int a,b;
		int small_dif = 1e9;
		sort(arr.begin(),arr.end());
		// cout<<arr.size()<<endl;
		for(int i=0;i<arr.size()-1;i++){
			int diff = abs(arr[i]-arr[i+1]);
			// cout<<i<<endl;
			int left = (i);
			int right =  arr.size() - (i+2);
			// cout<<left<<" "<<right<<endl;
			if(diff < small_dif && left == right){
				a = arr[i];
				b = arr[i+1];
				small_dif = diff;
			}
		}
		cout<<small_dif<<endl;
	}
}