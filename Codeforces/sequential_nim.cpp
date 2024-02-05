#include<bits/stdc++.h>
using namespace std;
int remaining(vector<int>&arr){
	int c=0;
	for(int x:arr)
		if(x>0)c++;
	return c;
}
int main(){
	freopen("input.txt","r",stdin);
	int t;
	int x;
	cin>>t;
	while(t--){
		cin>>x;
		vector<int> arr(x);
		int k=0;
		for(int i=0;i<x;i++){
			cin>>arr[i];
			
		}
		while(k<x && arr[k]==1)
			k++;
		// cout << ((k == x) ^ (k % 2) ? "Second" : "First") << '\n';
		if((k==x)^(k%2))
			cout<<"Second"<<endl;
		else
			cout<<"First"<<endl;
	}


}