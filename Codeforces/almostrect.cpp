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
       int n;cin>>n;
       bool gotone = false;
       string x;
       int a,b,c,d;
       int e,f,g,h;
       a = -1; 
       b = -1; 
       c=   -1; 
       d=   -1; 
       char ans[n][n] ;
       FOR(n){
           for(int j=0;j<n;j++){
               ans[i][j] = '.'; 
               char x;cin>>x;if(x=='*'){

                   if(!gotone){a= i;b=j;gotone = true;}
                   else{c=i;d=j;}
               }                   
           }
       }
      if(a==c || b==d){ //same sides
            if(a==c){
                if(a+1<n){e = a+1;f= b;g = a+1;h = d;}
                else{e = a-1;f= b;g = a-1;h = d;}
            }
            if(b==d){
                if(b+1<n){f = b+1;e= a;h = b+1;g = c;}
                else{f = b-1;e= a;h = b-1;g = c;}
            }

      } 
      else{
        e = a;f = d;        
        g = c;h = b; 
      }
      ans[a][b] =  '*';
     ans[c][d] = '*'; 
     ans[e][f] = '*'; 
     ans[g][h] = '*'; 
     FOR(n){
         for(int j=0;j<n;j++)cout<<ans[i][j];
         cout<<endl;
     }
        
    }
} 


