#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	
	int n;
	cin>>n;
	
	while(n--){
		ll a,b;
		cin>>a>>b;
		if(a==b){
			cout<<0<<endl;
			continue;
		}
		if(a>b){
			//right
			
			int count = 0;
			int ans = 0;
			while(a>b && !(a&1)){
				a = a>>1;
				count++;
			}
			// cout<<"c"<<count<<endl;
			if(a==b){
				if(count>=3){
					ans+= count/3;
					count = count%3;
				}
				if(count>=2){
					ans+= count/2;
					count = count%2;
				}
				if(count>=1){
					ans+=count;
					count = count-1;
				}
				// if(count>0)
				// 	cout<<-1<<endl;
				// else
				cout<<ans<<endl;
			}else{
				cout<<-1<<endl;
			}
		}else{
			
			int count = 0;
			int ans = 0;
			while(a<b){
				a = a<<1;
				count++;
			}
			if(a==b){
				if(count>=3){
					ans+= count/3;
					count = count%3;
				}
				if(count>=2){
					ans+= count/2;
					count = count%2;
				}
				if(count>=1){
					ans+=count;
					count = count-1;
				}
				// if(count>0)
				// 	cout<<-1<<endl;
				// else
				cout<<ans<<endl;
			}else{
				cout<<-1<<endl;
			}
		}
	}
	
	
}