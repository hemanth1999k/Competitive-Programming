#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	
	while(t--){
		ll n;
		
		cin>>n;
		
		if(n==1){
			cout<<1<<endl;
			continue;
		}

		// for(int i=1;i<=n;i++){
		// 	int d = (i-1)^i;
		// 	int c=0;
		// 	while(d>0)
		// 		if(d&1){
		// 			c++;
		// 			d=d>>1;
		// 		}
		// 		else d=d>>1;
		// 	sum+=c;
		// 	cout<<c<<" "<<sum<<endl;

		// }
		
		ll tot_sum = 0;
		while(n>0){
			if(n==1){
				tot_sum+=1;
				break;
			}
			ll i=1;

			ll new_sum = 1;
			while(i*2<=n){
				new_sum= new_sum*2+1;
				i = i*2;
			}
			tot_sum+=new_sum;
			n = n-i;
			// cout<<sum<<" "<<n<<endl;
		}
		
		cout<<tot_sum<<endl;
	}
	
	
}