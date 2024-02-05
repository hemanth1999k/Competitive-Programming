#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
#define FOR(x,n) for(int i=x;i<n;i++)

int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        string s;
        cin>>s;
        vint mpos;
        bool f = true;
        int mcount = 0;

        int j=0;
        for(int i=0;i<n;i++){
            if(s[i] == 'M'){
                mpos.push_back(i);
                mcount +=1;
                for(;j<i;j++){
                    if(s[j] == 'T'){
                        s[j] = 'B';break;}
                }
                if(j==i){
                    f = false;
                    break;
                }
            }
        }
       for(auto i:mpos){ 
            int j = i+1;
            for(;j<n;j++){
                if(s[j] == 'T'){
                    s[j] = 'A';break;
                }
            }
            if(j>=n){
                f = false;break;}
        } 
         
            
        if(f && s.size()-mcount == 2*mcount)
            cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }
}
