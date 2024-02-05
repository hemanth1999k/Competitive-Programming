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
    freopen("output1.txt","w",stdout);
     vint arr={1,2,3,4};
     do{
         cout<<endl;
         cout<<arr.size()<<" "<<arr.size()<<endl;
         FOR(arr.size())cout<<arr[i]<<" ";
     }while(next_permutation(arr.begin(),arr.end()));
}
