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
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
struct BIT{
    int n;
    vint bit;
     
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
    #else
    #endif
    ll n,m;
    cin>>n>>m;
    vlong arr(n+1);
    arr[1]=1;
//    for(int i=2;i<=n;i++){
//       arr[i]=(arr[i-1]+1)%m; 
//       arr[i]= (arr[i] + (arr[i/(i-1)]+1)%m)%m;
//    }
    ll tot=1;
    for(int i=2;i<=n;i++){
        ll s = tot+(i-i/2);
//        cout<<i<<" : ";
        for(int j=2;j<=i/2;j++){
            s = (s + arr[i/j])%m; 
//            cout<<i/j<<" ";
        }
//        cout<<endl;
        arr[i] =s;
        tot = (tot+arr[i])%m;
    } 
//    FR(i,1,n+1)cout<<arr[i]<<" ";
//
//    cout<<endl;
//    FR(i,1,n)cout<<arr[i+1]-arr[i]<<" ";
//    cout<<endl;
    cout<<arr[n]<<endl;
}

