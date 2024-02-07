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
#define ar array 
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
	// freopen("input.txt","r",stdin);
 //    freopen("output.txt","w",stdout);
	
    int n,m;
	cin>>n>>m;
	set<ar<int,2>> s;
	for(int i=0;i<n;++i){
		int a;
		cin>>a;
		s.insert({a,i});
	}

	// for(auto x:s){
	// 	cout<<x[0]<<" ";
	// }
    // cout<<nl;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		auto it = s.lower_bound({x,0});
		// cout<<x<<" "<<(*it)[0]<<nl;
		if(it == s.begin() ){

			if((*it)[0]==x){
                cout<<(*it)[0]<<nl;
                s.erase(it);
            }
            else
                cout<<-1<<nl;
		}
        else if(it != s.end()){
            if((*it)[0]==x){
                cout<<x<<nl;
                s.erase(it);
            }else if( (*it)[0] > x){
                it--;
                cout<<(*it)[0]<<nl;
                s.erase(it);
            }
		}else{
            if(s.size()>0){
                auto kt = s.end();
                kt--;
                cout<<(*kt)[0]<<nl;
                s.erase(kt);
            }else{
                cout<<-1<<nl;
            }
        }
	}
}
