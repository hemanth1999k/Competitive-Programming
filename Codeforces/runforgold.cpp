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
bool compare(vint a,vint b){
    int c=0;
    FOR(5)if(a[i]<b[i])c++;
    return c>=3;
}
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
        vvin races(n);
        for(int j=0;j<n;j++){
            int x;
            races[j] = vector<int>();
            FOR(5){cin>>x;races[j].PB(x);}
        }
        int cho = 0;
        for(int i=1;i<n;i++){
            bool x = compare(races[i],races[cho]);
            if(x)
                cho = i;
        }
        int sp = cho;
        bool f = false;
        for(int i=0;i<n;i++){
            if(compare(races[i],races[cho])){
                f=true;break;}
        }
        if(!f)cout<<cho+1<<endl;
        else cout<<-1<<endl;
        

    }
	
}

