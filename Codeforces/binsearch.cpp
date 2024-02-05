#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i) 
#define FOR1(n) for(int i=1;i<n;++i)
#define FR(i,n) for(int i=1;i<n;++i)
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
int search(vint arr,int x){
    int l=0,r=arr.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] < x)
            l = mid+1;
        else if(arr[mid] > x)
            r = mid-1;
        else return mid;
    }
    return -1;
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
    vint arr(t,0);
    FOR(t)cin>>arr[i]; 
    int q;
    cin>>q;
    FOR(q){
        int x;
        cin>>x;
        cout<<search(arr,x)<<endl;;
    }
}

