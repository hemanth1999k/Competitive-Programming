#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    freopen("input.txt","r",stdin); 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    int arr1[n];
    memset(arr1,-1,sizeof arr1);
    bool done[n];
    memset(done,0,sizeof done);
    vector<pair<int,int>> V;
    int r=-1;
    for(int i=0;i<n;i++)
        if(arr1[i]==-1){
            vector<array<int,2>> A;
            A.push_back({(int)1e9,i});
            for(int j=i+1;j<n;j++){
                int li = j;
                while(A.size()>0 && A[A.size()-1][0]>arr[j]){
                   li = A[A.size()-1][1];
                   arr1[li] = -1;
                   A.pop_back();
                } 
                A.push_back({arr[j],li});
                arr1[li] = arr[j];
                cout<<li<<" "<<arr1[li]<<endl;
                
            }     
    }
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
}
