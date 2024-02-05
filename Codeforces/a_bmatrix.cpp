#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution{
public:
	
	void run(){
		int n,m,a,b;
		cin>>n>>m>>a>>b;
		if(n*a!=m*b){
			cout<<"NO"<<endl;
		}
		else{
			char arr[n][m];
			memset(arr,'0',sizeof arr);
			int shift = 0;
			for(int i=1;i<m;i++)
				if(i*n%m==0){
					shift=i;
					break;
				}

			for(int i=0;i<n;i++){
					for(int j=0;j<a;j++){
							arr[i][(j+i*shift)%m]='1';						
					}
				
			}
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++)
					cout<<arr[i][j];
				cout<<endl;
			}
		}
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