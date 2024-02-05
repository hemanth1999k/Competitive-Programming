#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>


//void fill(int arr[][],vector<bool> &used,int u,int v){
//    int n=used.size()-1;
//    for(int i=u;i<n;i++){
//        for(int j=v;j<n;j++){
//             
//            fill(arr,used,i,j+1);
//        }
//    }
//    
//    
//}

int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout<<-1<<endl;continue;}
        vector<bool> used(n+1,false);
        int arr[n][n]; 
        int s = 1; 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s>n*n)
                    s=2;
                arr[i][j] = s;
                s+=2;
            }
        } 
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
       }
         
        

    }
 
}
