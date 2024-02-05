#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define ll long long 
#define vint vector<int>
#define vlong std::vector<long long>
#define vstr std::vector<std::string>
#define vvin std::vector<vector<int>>
#define PB push_back
#define nl "\n"
#define F first
#define S second
#define sortit(x) sort(x.begin(),x.end())

bool ISPRIME(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    } 
    return true; 
}
int solve(int n,std::string s,std::string t){
    int sum=0;
    std::vector<bool> taken(n,false);
    for(int i=0;i<n;i++){
       if(t[i] == '1'){
          for(int j=-1;j<=1;j++){
            if(i+j>=0 && i+j<n){
               if(s[i+j] == '1' && !taken[i+j] && j!=0) {
                  taken[i+j] = true; 
                  sum++;
                  break;
               }else if(s[i+j] =='0' && j==0 && !taken[i+j]){
                  taken[i] = true;
                  sum++;
                  break;
               }
            }
          } 
       } 
        
    }
       return sum;
}
int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    freopen("input.txt","r",stdin);
    int t;
    std::cin>>t;
    int i=0;
    while(t--){
        int n;
        std::cin>>n;
        std::string s,t;
        std::cin>>s>>t;
        //cout<<i<<" :"<<solve(n,s,t)<<endl;
        std::cout<<solve(n,s,t)<<std::endl;
        i++;
        //cout<<endl;
    }

}
