#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define FR(i,n) for(int i=0;i<n;++i)
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
//template<class T>
//void swap(T &a,T &b){
//    T c;
//    c = a;
//    a = b;
//    b = c;
//}


/*
 * 3 2 1
 * r r r 
 * 2 3 1
 * l l r
 * 2 1 3
 * l r l
 * 3 3 2 2
 * 3 2 3 2
 * r l l r
 * 3 2 2 3
 * r l r l
 * 2 3
 * r l 
*
* */

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    #else
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vint arr(n);
        vector<bool> D(n,false);//false - right
        map<int,array<int,2>> mp1,mp2;
        FOR(n){
            cin>>arr[i];
            if(i%2)
                mp1[arr[i]][0]++;
            else
                mp1[arr[i]][1]++;
        }
        sortit(arr);
        FR(i,n){
            if(i%2)
                mp2[arr[i]][0]++;
            else
                mp2[arr[i]][1]++;

        }
        bool f= true;
        for(auto x:mp1){
            int ai = x.first;
            if(mp1[ai][0] != mp2[ai][0] || mp1[ai][1]!=mp2[ai][1])
                f=false;
        }
        if(f)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
	
}

