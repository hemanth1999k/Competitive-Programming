#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
#define FOR(x,n) for(int i=x;i<n;i++)

int main(){
    int t;
    freopen("input.txt","r",stdin);
    cin>>t;
    bool b= false;
    if(t>4)
        b = true;


    
    while(t--){
        int n,m,k;
        cin>>n;
        if(n==2 || n==4){cout<<"YES"<<endl;continue;} 
        if(n==1 || n==3){cout<<"NO"<<endl;continue;}
        bool f = false; 
        if(n%2== 0){
            long long sr = sqrt(n/2);  
            if(sr*sr == n/2){
                cout<<"YES"<<endl;
                f = true;
            }
        }
        if(n%4==0){
            long long sr = sqrt(n/4);  
            if(sr*sr == n/4){
                cout<<"YES"<<endl;
                f = true;
            }
        }

        if(!f)cout<<"NO"<<endl;

   }

}

