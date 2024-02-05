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
bool ispalindrome(string x){
    int i=0;
    int j=x.size()-1;
    while(i<j){
        if(x[i] != x[j])
            return false;
        i++;j--;
    }
    return true;
}
int gcount(string s,char c){
    int count = 0;
    FOR(s.size()){
        if(s[i] == c)
            count++;
    }
    return count;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
        int x;
        cin>>x;
        int ct = 0;
        FOR(x){
           int a;
          cin>>a;
         if(a==1 || a==3)
             ct++;
        } 
        cout<<ct<<endl;
    }
}
       
