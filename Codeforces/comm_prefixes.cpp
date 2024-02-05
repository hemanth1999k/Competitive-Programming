#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        string s = "";
        for(int i=0;i<50;i++)
            s+="a";
        cout<<s<<endl;
        // return 0;
        for(int i=0;i<n;i++){
            string t=s;
            for(int j=arr[i];j<50;j++){
                
                t[j] = (t[j]=='b'?'a':'b');
            }
            cout<<t<<endl;
            s = t;
        }
    }

}