#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}



using namespace std;

int test(int n){
	int div = 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			div = i;break;
		}
	}
	if(div > 0 ){
		int big = n/div;
		n = n/big;
	}
	return n;

}
int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count = 0;
		while(n!=1){
			
			int a = test(n);
			int b = test(n-1);

			if(a > b){
				n--;
				count++;
			}else{
				n = a;
				count++;
			}

		}
		// while(n!=1){
		// 	int div = 0;
		// 	for(int i=2;i<=sqrt(n);i++){
		// 		if(n%i==0){
		// 			div = i;break;
		// 		}
		// 	}
		// 	if(div > 0){
		// 		int big = n/div;
		// 		n = n/big;
		// 		count++;
		// 	}else{
		// 		n--;
		// 		count++;
		// 	}
		// }
		cout<<count<<endl;

	}
}
