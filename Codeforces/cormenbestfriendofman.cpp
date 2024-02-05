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
int main(){
	freopen("input.txt","r",stdin);
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	FOR(n){cin>>arr[i];}
	int count  = 0;
	FOR1(n){
		if(arr[i-1]+ arr[i]<k){
			int req = k - (arr[i-1]+arr[i]);
			count+= req;
			arr[i] += req;
		}
	}
	cout<<count<<endl;
	FOR(n)
		cout<<arr[i]<<" ";
	cout<<endl;
}
