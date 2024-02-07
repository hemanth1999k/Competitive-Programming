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
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	vint towers;
	map<int,int> mk;
	set<int> s;

	while(t--){
		int x;
		cin>>x;
		// cout<<x<<nl;
		if(s.empty()){
			s.insert(x);
			mk[x]++;
		}else{
			auto it = s.lower_bound(x);
			int l = *it;
			if(it == s.end()){

				s.insert(x);
				mk[x]++;
			}
			else if(l > x){
				mk[x]++;
				mk[l]--;
				if(mk[l]==0)
					s.erase(it);
				s.insert(x);
			}
			else if(l==x){
				while(it!=s.end() && *it <= x){
					it++;
				}
				if(it!=s.end()){
					mk[x]++;
					mk[*it]--;
					if(mk[*it]==0)
						s.erase(it);
				}
				else if(it==s.end())
					mk[x]++;
			}
		}
	}
	ll ss = 0;
	for(auto c:mk){
			ss += c.S;
			// cout<<c.F<<" "<<c.S<<nl;
		}
	cout<<ss<<nl;
}
