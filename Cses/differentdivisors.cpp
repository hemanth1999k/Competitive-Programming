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


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    ll n,b;
    map<int,int> mp;
    ll maxbig = 2;
    ll minbig = 10001*10001;
    mp[2] = 1; 
   t = 3000; 
   n = 10001;
n = n-3000;
    while(t--){

      //cin>>n;
    n++;
      ll o = min(maxbig,n+1);
      
        for(;;o++){
            if(o<maxbig){
                if(mp[o] == 1)
                    break;
            }
            else{
                if(ISPRIME(o)){
                    mp[o] = 1;maxbig = o;
                    if(o>=n+1)
                        break;
                }
                
            }
        }

        
        ll g = min(maxbig,o+n);
        for(;;g++){
            if(g<maxbig){
                if(mp[g] == 1)
                    break;
            }
            else{
                if(ISPRIME(g)){
                    mp[g] = 1;maxbig = g;
                    if(g>=o+n)
                        break;
                }
                
            }
        }
//        cout<< o __ g __ o*g __ maxbig<<endl;
        cout<<o*g<<endl;
        //n++;
    }    
}

