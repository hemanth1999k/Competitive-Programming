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

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        string s,x;
        cin>>s>>x;
        bool f = false;
        for(int i=0;i<s.size();i++){
            if(s[i] == x[0]){
                int j=1;
                queue<int> q;
                for(;j<x.size();j++){
                    if(i+j >= s.size() || s[i+j] != x[j])
                        break;
                    if(i+j-2 >=0 && s[i+j-2] == s[i+j])
                        q.push(j);
                }
                int r = x.size()-j;
                //cout<<r<<" "<<i+j-r<<endl;
                if(i+j-r-1 >=0){
                    string p = x.substr(j,r);
                    reverse(p.begin(),p.end());
                 
                    if(s.substr(i+j-r-1,r) == p)
                        f = true;
                }
                if(!f)
                     while(!q.empty()){
                         j =q.front();
                         q.pop();
                     r = x.size()-j;
                     //cout<<r<<" "<<i+j-r<<endl;
                      if(i+j-r-1 >=0){
                         string p = x.substr(j,r);
                         reverse(p.begin(),p.end());
                       //   cout<<s.substr(i+j-r-1,r)<<" "<<p<<endl;
                         if(s.substr(i+j-r-1,r) == p)
                             f = true;
                      }
                     }
            
            }
            if(f)
                break;
        }
        if(f)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
 
    }
}
