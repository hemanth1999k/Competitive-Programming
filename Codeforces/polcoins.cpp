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
1000 = 334 + 333*2
1000/3 = 333.333
333 + 333*2 = 999
333+1 + 333*2
t = 2/3 = 0
d = 2
0 + (0+1)

1 = 1+1/3
2 = 0,1
3 = 1,2
4 = 2,1
4 = 4/3
1 1*2 = 3
2
5 = 
*/

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int u = x/3;
        int v= u+u*2;
        int d = x-v;
        if(d==2)
            cout<<u<<" "<<u+1<<endl;
        else
            cout<<u+d<<" "<<u<<endl;
        
    }
	
}
