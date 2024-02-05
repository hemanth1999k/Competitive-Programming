#include<bits/stdc++.h>
using namespace std;
int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		// for(int i=4;i<n*4;i+=4){
		// 	if(i<n*4-n)
		// 		cout<<9;
		// 	else
		// 		cout<<8;
		// }
		// cout<<8<<endl;

		int count = (n*4-n);
		int s9 = count/4;
		int s8 = n/4;

		for(int i=0;i<s9;i+=1)
			cout<<9;

		for(int i=0;i<s8;i++)
			cout<<8;
		if(n%4>0)
			cout<<8;
		cout<<endl;
		// cout<<x-1<<endl;
	}
}