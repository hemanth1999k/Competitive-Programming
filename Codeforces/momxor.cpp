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
/*
 * values range 0< a_i < 2^k
 * n: odd
 * all bits are 1
 * and:1 xor:1
 * if one or more 0 bit:
 *  n-v and v is odd and v bits are 0
 *      and:0  xor:0
 *  n-v and v is even and v bits are 0
 *      and:0 xor:1
 * n: even
 * and:1 xor:0
 * if one or more 0 bits:
 *  n-v and v is odd and v bits are 0
 *      and:0 xor:1
 *  n-v and v is even and v bits are 0
 *      and:0 xor:0
 *
 * 1 and 1 ok
 * 1 and 0 
 *
 * n: even
 *
 * */

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    #else
    #endif
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2){

        }else{

        }

    }
	
}

