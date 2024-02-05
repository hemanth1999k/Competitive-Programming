
#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>

int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0;
        int c=0;
        int start=-1,end=-1;
        for(int i=0;i<n;i++)
            if(s[i] == '*'){
                s[i] = 'x';
                start=i;
                c++;
                break;
            }
        
        for(int i=n-1;i>=0;i--)
            if(s[i] == '*'){
                s[i] = 'x';
                end=i;
                c++;
                break;
            }
        if(start!=-1 && end!=-1){
            //int lp = start;
            for(int i=start+1;i<end;i++){
               int best = i; 
               for(int j=i;j<i+k;j++){
                    if(s[j] == '*')
                        best = j;
               } 
               if(s[best]=='*' && end - (i-1) > k  ){
                   s[best] = 'x';
                   i=best;
                   c++;
               }
            }

        } 
        cout<<c<<endl;
    }
}
        
 
