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
void swap(int &a,int &b){
    int t=a;
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
        vint arr(n);
        vint arr1(n);
        int o=0,e=0;
        FOR(n){
            cin>>arr[i];
            arr[i]=arr[i]%2;
            arr1[i] = arr[i];
            if(arr[i])o++;else e++;
        }
        if(abs(o-e)>1){
            cout<<-1<<endl;
            continue;
        }
       //odd 
       int j1=0,j2=0;
       int c1=0,c2=0;
       FOR(n){
          j1 = max(i,j1);
         if(arr[i]%2 == i%2){
           while(j1<n and arr[j1]%2==i%2)
               j1++;
           swap(arr[i],arr[j1]);
           c1+=(j1-i);
         }  

          j2 = max(i,j2);
         if(arr1[i]%2 != i%2){
           while(j2<n and arr1[j2]%2!=i%2)
               j2++;
           swap(arr1[i],arr1[j2]);
           c2+=(j2-i);
         }  

       } 
//       j=0;
//       FOR(n){
//          j=max(i,j); 
//          if(arr1[i]%2!=i%2){
//            while(j<n and arr1[j]%2!=i%2)
//                j++;
//            swap(arr1[i],arr1[j]);
//            c2+=(j-i);
//          }
//       }
//       cout<<c1<<" "<<c2<<endl;
       cout<<min(c1,c2)<<endl; 
    }
    
}

