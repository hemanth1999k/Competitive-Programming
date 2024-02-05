// #pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007

int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool a = false;
		while(n>1){
			int prevn = n;
			if(n%2==1){
				cout<<n<<"  "<<n<<endl;
				n = n/n;
				a = !a;
			}else{
				for(int i=3;i<n;i+=2){
					if(n%i==0 && (n/i)%2!=1){
						cout<<2<<"  "<<n<<"  "<<i<<endl;
						n = n/i;
						a = !a;
						break;
						
					}
				}
				if(prevn == n){
					cout<<n<<"  "<<n-1<<endl;
					n = n-1;
					a = !a;
				}

			}
		}
		if(a==true){
			cout<<"Ashishgup"<<endl;
		}else
			cout<<"FastestFinger"<<endl;
		
	}
}