#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define FR(x,b) for(int x=0;x<b;++x)
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
 * 3 2 1
 * r r r 
 * 2 3 1
 * l l r
 * 2 1 3
 * l r l
 * 3 3 2 2
 * 3 2 3 2
 * r l l r
 * 3 2 2 3
 * r l r l
 * 2 3
 * r l 
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
        int n,m;
        cin>>n>>m;
        vector<string> S;
        vector<string> R;

        vint sc1,sc2;
        int c1[26],c2[26];

        memset(c2,0,sizeof c2);
        string ans = "";
        FOR(n+n-1){
           string x;cin>>x;
           S.PB(x); 
        }
        FR(i,m){
            memset(c1,0,sizeof c1);
            FR(j,n+n-1){
                int c = S[j][i]-'a';
                c1[c] += 1;
            }
            FR(j,26){
                if(c1[j]%2){
                    ans+= (char)('a'+j);
                    break;
                }
            }
            //cout<<ans<<endl;
            
        }
        cout<<ans<<endl;
       
    }
}
