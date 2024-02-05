#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define FR(i,a,b) for(int i=a;i<b;++i)
#define rng(a,b) for(int i=a;i<b;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back
#define nl cout<<endl 
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
template<class T>
void swap(T &a,T &b){
    T t=a;
    a=b;
    b=t;
}
struct DSU{
    int n;
    vint p;
    DSU(int N){
        n = N;
        p.assign(n+1,-1);
        for(int i=0;i<=n;++i)p[i] = i;
    }
    int find(int i){
        if(p[i]==i)return i;
        return p[i] = find(p[i]);
    }
    void merge(int a,int b){
        a = find(a),b = find(b);
        if(a!=b) p[b] = a;
    }
};
ll slicebit(ll x, int i){
   long long y = (1LL<<i) -1LL;
   return x&y;
}
bool get(long long x,int i){
    return x&(1LL<<i);
}
int msb(ll x){
    return log2(x);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #else
    #endif
 	long long n,l,r;
  	cin>>n>>l>>r;
    long long x = 2*n;
    int Lmsb = msb(l);
    int Rmsb = msb(r);
    int Nmsb = msb(n);
    ll ans = 0;
    if(!get(n,Lmsb)){
        ll highlimit = 0;
        int rang = 0;
        if(Rmsb >= Nmsb+1){
            ans += (1LL<<Nmsb);
            rang = Nmsb;
        }
        else{
            highlimit = r;
            if(get(n,Rmsb)){
//                ans += slicebit(r,Rmsb);
                 ans += (r-(1LL<<(Nmsb)))+1;
            }
            rang = Rmsb;
        }
       for(int i=Lmsb+1;i<rang;i++){
            if(get(n,i)){
                ans += (1LL<<(i)); 
            }
        }
    }else{
        cout<<Lmsb<<endl;
        ans = (1LL<<(Lmsb+1))-1 - l+1;
        int rang = 0;
        cout<<ans<<endl;
        if(Rmsb >= Nmsb+1){
            ans += (1LL<<Nmsb);
            rang = Nmsb;
        }
        else{
            if(get(n,Rmsb))
                ans += (r-(1LL<<(Nmsb)))+1;
                //ans += slicebit(r,Rmsb);
            rang = Rmsb;
        }
 //       cout<<ans<<endl;
        for(int i=Lmsb+1;i<rang;i++){
            if(get(n,i)){
                ans += (1LL<<(i));
            }
        }
    }
    cout<<ans<<endl; 
}
