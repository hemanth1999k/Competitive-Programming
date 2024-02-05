#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	int x;
	cin>>t;
	while(t--){
		cin>>x;
		x = 2*x;
		vector<int> arr(x);
		vector<int> sol;
		for(int i=0;i<x;i++){
			cin>>arr[i];
		}
		for(int i=0;i<x;i++){
			if(sol.size()==0){
				sol.push_back(arr[i]);
			}else{
				int j;
				for( j=0;j<sol.size();j++){
					if(sol[j] == arr[i])break;
				}
				if(j==sol.size()){
					sol.push_back(arr[i]);
				}
			}
		}
		for(int i=0;i<x/2;i++){
			cout<<sol[i]<<" ";
		}
		cout<<endl;
	
	}

}