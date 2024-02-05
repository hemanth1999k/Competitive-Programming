#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define long long ll
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
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	vint arr(t);
	FOR(t){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int q;
	cin>>q;
	while(q--){
		int n,l = 0,r = arr.size()-1;
		cin>>n;
		while(l < r){
			int mid = (l+r)/2;
			if(arr[mid]>n){
				l = mid;	
			}else{
				r = mid;
			}
		}
		if(arr[l] n){
			
		}else if{

		}
	}
}
