#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	int x,y,z;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
		
		if(x==y && y==z){
			cout<<"YES"<<endl;
			cout<<x<<" "<<y<<" "<<z<<endl;
		}else{
			if(x!=y && x!=z && y!=z){
				cout<<"NO"<<endl;
			}else if(x==y && x>z){
				cout<<"YES"<<endl;
				printf("%d %d %d\n",x,z,z);
			}else if(y==z && y > x){
				cout<<"YES"<<endl;
				printf("%d %d %d\n",x,x,z);
			}else if(x==z && x>y){
				cout<<"YES"<<endl;
				printf("%d %d %d\n",y,x,y);
			}else{
				cout<<"NO"<<endl;
			}
		}
	}

}