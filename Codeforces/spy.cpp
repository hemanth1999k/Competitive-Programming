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
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int a=-1,b=-1;
        int pa=-1,pb=-1;
        bool ta= false,tb = false;

        for(int i=0;i<n;i++){
            int x;
            
            cin>>x;
            //cout<<x<<" ";
            if(a==-1){a = x;pa = i+1 ;}
            else if(x == a){ ta = true;}
            else if(x!=a && b==-1){ b =x;pb = i+1;}
            else if(x!=a && x==b){ tb = true;}
            

       }
        //cout<<endl;
         if(a!=-1 && b!=-1){
                if(ta){cout<<pb<<endl;}
                else if(tb){cout<<pa<<endl;}
            }
        
        
    }
} 












