#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define rng(a,b) for(int i=a;i<b;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back
#define nl "\n"
#define F first
#define S second
#define __ << " " << 
#define ar array
#define sortit(x) sort(x.begin(),x.end())
#define umap unordered_map
using namespace std;
template <typename T>
void insert(vector<T> &vec, T x ){
	auto it = vec.lower_bound(x);
	vec.insert(it,x);
}
bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        int count = 1;
        while(w%2==0)
        {
            w = w/2;
            count*=2;
        }
        while(h%2==0)
        {
            h = h/2;
            count*=2;
        }
        if(count>=n)
            cout<<"yes"<<nl;
        else cout<<"no"<<nl;
    }
}

