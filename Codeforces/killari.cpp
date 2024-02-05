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
#define rsotrit(x) sort(x.begin(),x.end(),std::greater<>())
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
//
//map
class item{
    public:
        int imp,c;
        item(int c,int imp){
            this->imp=imp;
            this->c = c;
        }
};

bool operator < (const item& item1,const item& item2){
    if(item1.imp < item2.imp)
       return true;  
    else if(item1.imp==item2.imp)
       if(item1.c>item2.c) 
           return true;
    return false;

}
vector<int> solve(vector<int> cost,vector<int>  importance,vector<int> query){
    priority_queue<item> p;  
    for(int i=0;i<cost.size();i++){
        item ite(cost[i],importance[i]);
        p.push(ite);
    }
    FOR(auto x:q){
        
    }
    return vector<int>();
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #else
    #endif
    int n,m;
    cin>>n;
    vint cost,imp,query;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cost.push_back(x);
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        imp.push_back(x);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        query.push_back(x);
    }
    solve(cost,imp,query);
}

