#include<bits/stdc++.h>
using namespace std;
int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long int> arr(n,0);

		for(int i=0;i<n;i++)cin>>arr[i];
		long long int cost = 0;
		int pi = 0;
		for(int i=0;i<arr.size();i++)if(arr[i]>0){pi = i;break;}

		for(int i=1;i<arr.size();i++){
			if(pi<i && arr[i]<0){
				int m = min(abs(arr[i]),abs(arr[pi]));
				arr[pi] -= m;
				arr[i] += m;
				while(arr[pi]<=0 && pi < arr.size()){
					pi++;
					if(arr[pi]>0 && arr[i]<0 && pi < i){
						int m = min(abs(arr[i]),abs(arr[pi]));
						arr[pi] -= m;
						arr[i] += m;
					}
				}
			}
		
		}
		
		for(int i=0;i<arr.size();i++)if(arr[i]<0){pi = i;break;}

		for(int i=1;i<arr.size();i++){
			if(pi<i && arr[i]>0){
				int m = min(abs(arr[i]),abs(arr[pi]));
				arr[pi] += m;
				arr[i] -= m;
				cost+= m;
				while(arr[pi]>=0 && pi < arr.size()){
					pi++;
					if(arr[pi]<0 && arr[i]>0 && pi<i){
						int m = min(abs(arr[i]),abs(arr[pi]));
						arr[pi] += m;
						arr[i] -= m;
						cost+= m;
					}
				}
			}
		}
		cout<<cost<<endl;

	}
}