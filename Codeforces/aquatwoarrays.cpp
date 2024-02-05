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
        int n;
        cin>>n;
        int a[n],b[n];
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        FOR(n)cin>>a[i];
        FOR(n)cin>>b[i];
        vint inc,dec;
        int ic=0,dc=0;
        for(int i=0;i<n;i++){
           if(a[i]>b[i]){
               dec.PB(i);
               dc+=abs(a[i]-b[i]);
           }
           else if(a[i] < b[i]){
               inc.PB(i);
               ic+=abs(a[i]-b[i]);
           }
        }
        if(ic!=dc)
            cout<<-1<<endl;
        else{
            int i=0;
            int j=0;
            vector<array<int,2>> ans;
            while(i<inc.size() || j<dec.size()){
//                cout<<dec[j]+1<<" "<<inc[i]+1<<endl;
                ans.PB({dec[j]+1,inc[i]+1});
                a[inc[i]]++;
                a[dec[j]]--;
                if(a[inc[i]]==b[inc[i]] && i<inc.size())
                    i++;
                if(a[dec[j]]==b[dec[j]] && j<dec.size())
                    j++;
            }
            cout<<ans.size()<<endl;
            FOR(ans.size())
                cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        }


    }
	
}

