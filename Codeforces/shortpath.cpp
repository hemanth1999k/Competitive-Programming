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


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,fx,fy;
        cin>>ax>>ay>>bx>>by>>fx>>fy;
        int shortpath = abs(ax-bx) + abs(ay-by);
        if(ax==bx and ax==fx){
//            cout<<"Here"<<abs(ax-bx)<<" "<<abs(ax-fx)<<endl;
            if( (ay>by and ay>fy) or (ay<by and ay<fy) )
            if(abs(ay-by) > abs(ay-fy) )
                shortpath+=2;
        }
        else if(ay==by and ay==fy){
            if( (ax<bx and ax<fx) or (ax>bx and ax>fx) )
            if(abs(ax-bx) > abs(ax-fx))
                shortpath+=2;
        }
        cout<<shortpath<<endl;
 
    }
	
}

