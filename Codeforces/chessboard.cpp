#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    
    vector<vector<int>> arr;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)arr.push_back(vector<int>(m,0));
    int j = y;
    arr[x][y] = 1;
    for(int i=n-1;i>=0;i--){
        cout<<i<<" "<<j<<endl;
        arr[i][j] = 1;
        for(int j=0;j<)
    }   

}