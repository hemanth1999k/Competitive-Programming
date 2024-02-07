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

bool formset(map<ll,int> &m,ll k){
    if(m[k]>0)return true;
    for(auto &x:m){
        if(x.F==0)continue;
        if(x.F>k)
            return false;
        if(x.F==k && x.S>0){
            return true;
        }
     if(x.S>0){
        x.S--;
        if(formset(m,k-x.F)){
            
            x.S++;
            return true;
        }
       x.S++; 
     } 
    }
    return false;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    vint arr(t);
    map<ll,int> mp;
    FOR(t){
     cin>>arr[i];
        mp[arr[i]]++;
    }    
    sort(arr.begin(),arr.end());
    mp[0] = 1;
    for(ll i=1;i<1e18;i++){
        bool pos = formset(mp,i);
        if(!pos){cout<<i;break;} 
    }

}

