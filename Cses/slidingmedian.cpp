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
//	auto it = vec.lower_bound(x);
    auto it = lower_bound(vec.begin(),vec.end(),x);
	vec.insert(it,x);
}
bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}
const int mxN = 2e5;

ll a[mxN];
ar<int,2> med={-1};
set<ar<int,2>> top,bot;


void fix(){
   int m = 1 + top.size() + bot.size();
   if(bot.size() < (m-1)/2){
      bot.insert(med);
      med = *top.begin();
      top.erase(med);
   } 
    if(bot.size() > (m-1)/2){
       top.insert(med);
        med = *--bot.end();
        bot.erase(med);
    }
}
void add(ar<int,2> x){
    if(med[0] == -1){
        med = x;
        return;}
    if(x<med)
        bot.insert(x);
    else 
        top.insert(x);
    fix();

}
void rem(ar<int,2> x){
    if(x==med){
       med =  *top.begin();
       top.erase(med);
    }
    else if(x < med)
        bot.erase(x);
    else 
        top.erase(x);
    fix();
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    freopen("input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    vint arr(n);
    
    FOR(n) cin>>arr[i];
    if(k==1){
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
    else{
        for(int i=0;i<k-1;i++)
            add({arr[i],i});
        for(int i=k-1;i<n;i++){
            add({arr[i],i});
            cout<<med[0]<<" ";
            rem({arr[i-k+1],i});
        }
    }
}












