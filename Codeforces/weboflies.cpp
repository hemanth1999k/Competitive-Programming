#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back
#define nl "\n"
#define F first
#define S second
#define sortit(x) sort(x.begin(),x.end())
using namespace std;

bool ISPRIME(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    } 
    return true; 
}
int solve(int n,string s,string t){
   bool A[2*1000][2*1000]; 
   bool B[2*1000][2*1000]; 
   int sum=0;
   return sum;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);

    int i=0;
    int n,m;
    cin>>n>>m;
    vint edges(n+1,0);
    vint weaker(n+1,0);
    int survives = 0;
    int dies=0;
    FOR(m){
        int u,v;
        cin>>u>>v;
        edges[u]++;
        edges[v]++;
        if(u<v){
            weaker[v]++;
             
        }else{
            weaker[u]++;
        }
        if(u<v){
            if(edges[u] - weaker[u]==1)
                dies++;
        }else if(edges[v] - weaker[v] == 1)
            dies++;

    }
    int t;
    cin>>t;
    FOR(t){
        int q;
        cin>>q;
        if(q==3){
            int count = 0;

            //for(int j=1;j<=n;j++){
            //   if(weaker[j] == edges[j])count++; 
            //}
            cout<<(n-dies)<<endl;
        }else if(q==2){
            int u,v;
            cin>>u>>v;
            edges[u]--;
            edges[v]--;
            if(u<v){
                weaker[v]--;
            }else{
                weaker[u]--;
            }
            if(u<v){
                if(edges[u] == weaker[u])
                    dies--;
            }
            else if(edges[v] == weaker[v])
                   dies--; 
            

        }else{
            int u,v;
            cin>>u>>v;
            edges[u]++;
            edges[v]++;
            if(u<v){
                weaker[v]++;
            }else{
                weaker[u]++;
            }
            if(u<v){
                if(edges[u] - weaker[u]==1)
                    dies++;
            }else if(edges[v] - weaker[v] == 1)
                dies++;



        }
    }
    
}
