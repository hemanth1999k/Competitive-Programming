#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    int n,t;
    cin>>t;
    while(t--){

        cin>>n;
        int x;
        vector<int> arr(n,0);

        vector<int> a(101,0);


        for(int i=0;i<n;i++){
            cin>>x;
            a[x]++;
        }
        if(a[0]==0)
            cout<<0<<endl;
        else{
            int i=0,fv=0;
            bool f1 = true;

            for(;i<n;i++){
                if(a[i]==1 && f1){f1 =false;fv = i;}
                if(a[i]==0)break;
            }
            if(!f1)
                cout<<fv+i<<endl;
            else
                cout<<2*i<<endl;
        }
    }
}