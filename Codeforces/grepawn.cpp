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
int solve(int n,string s,string t){
    int sum = 0;
    int count= 0;
    bool oneb = false;
    for(int i=0;i<n;i++){
        if(s[i] == '1' && t[i] == '1')
            count++;
        else if(s[i] == '1' && t[i] == '0'){
            if(count%2==0){
                sum+= count;
                count = 0;
                oneb = true;
            }else{
                sum += (count);
                count = 0;
            }
        }
        else{ //if(s[i] == '0' && t[i] == '1'){
             if(count%2==0){
                sum+= count;
                count = 0;
            }else{
                if(oneb)
                    sum+=count;
                else
                    sum += (count-1);
                count = 0;
            }
            if(t[i] == '1'){
               sum+=1; 
            }
            count = 0;
            oneb = false;
        }
    }
        if(count>0){
            if(count%2==0){
                sum = sum+count;
            }
            else if(oneb){
                sum=sum+ count;
            }else sum+= (count-1);
        }
        return sum;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    int i=0;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        //cout<<i<<" :"<<solve(n,s,t)<<endl;
        cout<<solve(n,s,t)<<endl;
        i++;
        //cout<<endl;
    }

}
