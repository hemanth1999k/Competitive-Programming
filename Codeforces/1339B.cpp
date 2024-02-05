#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		vector<int> newarr;


		int c = arr.size()/2;

		newarr.push_back(arr[c]);
		int k=c-1,j=c+1;
		bool turn = false;
		while(k>=0 || j<arr.size()){
			if(turn && j<arr.size()){
				newarr.push_back(arr[j]);
				j++;
			}
			else if(k>=0){
				
				newarr.push_back(arr[k]);
				k--;
			}
			turn = !turn;
		}
		for(int i=0;i<n;i++){
			cout<<newarr[i]<<" ";
		}
		cout<<endl;

	}
}