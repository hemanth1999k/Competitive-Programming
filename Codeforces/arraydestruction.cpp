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

bool possible(int x,int i,map<int,int> &mp,vint &arr){
    for(int j=i;j>=0;j--){
        if(mp[arr[j]]>0 && mp[x-arr[j]] > 0){
            mp[arr[j]]--;
            mp[x-arr[j]]--;
            //cout<<"c" __ arr[j] __ x-arr[j] __ j<<nl;
            if(possible(max(arr[j],x-arr[j]),j-1,mp,arr))
                return true;
            if(j==0)
                break;
            mp[arr[j]]++;
            mp[x-arr[j]]++;
        }
    }
    int co=0;
    for(auto pp:mp)
        if(pp.S >0)
            co++;
    if(co==0)
        return true;   
    else return false;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n = 2*n;
        vint arr(n);
        map<int,int> mp;
        FOR(n){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(n>2){
            sort(arr.begin(),arr.end());
           // 1 2 3 3 4 5 6 7 11 14 
            bool f = false;
            for(int i=n-2;i>=0;i--){
               int x = arr[n-1] + arr[i];
               cout<<"x"<<x<<nl;
               if(possible(x,n-1,mp,arr)){
                   cout<<"YES"<<nl;
                   f= true;
                   break;
               }
            }
            if(!f)cout<<"NO"<<nl;
 
        }
        else{ 
           
        } 
    }
}
