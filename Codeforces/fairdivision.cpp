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
        int n;cin>>n;
        int o=0,t=0;
        FOR(n){int x;cin>>x;
            (x==1?o++:t++);
        }
        int sum = o+2*t;
        if(sum%2==0){
            int f = sum/2;
            if(t==0 && o%2==0)
                cout<<"yes"<<nl;
            else if(o==0 && t%2==0)
                cout<<"yes"<<nl;
            else if(o>0 && t>0){
                for(int i=0;i<=t && 2*i <= f;i++){
                    int p = f-2*i;
                    if( p + 2*i ==  (o-p) + 2*(t-i)){
                       cout<<"yes"<<nl;break;} 
                    
                }
            }
            else cout<<"no"<<nl;
        }
        else cout<<"no"<<nl;
    }



}

