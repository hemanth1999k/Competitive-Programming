#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    while(n--){
        int arr[4];
        for(int i=0;i<4;i++)
            cin>>arr[i];
        int e=0;
        bool pos = true;
        for(int i=0;i<4;i++){
            if(arr[i]%2==0)
                e++;
            if(i<3 && !arr[i])
                pos = false;
        }
        
        if(e>=3){
            cout<<"YES"<<endl;
        }else if(pos){
            if(e==1 || e==0)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;

        }else 
            cout<<"NO"<<endl;
        
        
        // else if(pos){
        //     int x = 0;

        //     for(int i=0;i<3;i++){
        //             arr[i]-=1;
        //     }
            
        // }
    }

}