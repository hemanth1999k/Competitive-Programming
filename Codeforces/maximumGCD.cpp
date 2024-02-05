#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007

int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int max = 1;
		for(int i=n;i>=1;i--){
			for(int j=2;j<=sqrt(i);j++){
				if(i%j==0 && max<(i/j)){
					max = i/j;
					break;
				}
			}
			float u = i;
			if(u/2.0 < max){
				break;
			}
		}

		cout<<max<<endl;
	}
}