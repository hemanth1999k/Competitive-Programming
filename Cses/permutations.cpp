#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}

using namespace std;
int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	if(t <4 && t > 1 )
		cout<<"NO SOLUTION";
	else if(t==4)
		cout<<"2 4 1 3";
	else{
		for(int i=1;i<=t;i+=2)
			cout<<i<<" ";
		for(int i=2;i<=t;i+=2)
			cout<<i<<" ";
	}
}
