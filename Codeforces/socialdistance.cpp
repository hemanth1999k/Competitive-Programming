#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
int main(){
	// freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		// vector<int> arr(n);
		vector<int> ocu;
		for(int i=0;i<n;i++){if(s[i]=='1')ocu.push_back(i);}
		int ocu_index = 0;
		int count = 0;

		int i=0;

		for(int i=0;i<n;i++){
			
		}

		while(i<n){
			if(ocu_index<ocu.size()){
				if(i < ocu[ocu_index]-k){
					count++;
					i+=k+1;
				}else{
					i = ocu[ocu_index] +k +1;
					ocu_index++;
				}
			}else{
				count++;
				i+=k+1;
			}
		}
		cout<<count<<endl;
	}
}