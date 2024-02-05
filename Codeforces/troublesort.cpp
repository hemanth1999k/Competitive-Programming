#include<bits/stdc++.h>
#define ll long long
using namespace std;

void swap(vector<vector<int> > &arr,int j){
	int k = arr[0][j];
	arr[0][j] = arr[0][j+1];
	arr[0][j+1] = k;
	k = arr[1][j];
	arr[1][j] = arr[1][j+1];
	arr[1][j+1] = k;
}

bool space(vector<vector<int> > arr){
	

	int s = arr[0].size();
	for(int i=0;i<s*2;i++){
		for(int j=0;j<s-1;j++){
			
			if(arr[0][j]>arr[0][j+1]){
				if(arr[1][j]!=arr[1][j+1]){
					swap(arr,j);
				}
				else{
					bool can = false;
					for(int k=0;k<s;k++){
						if(k!=j && k!=j+1){
							if(arr[1][k]!=arr[1][j]){
								swap(arr,j);
								can = true;
								break;
							}
						}
					}
					if(!can)
						return false;
				}
			}
		}
	}
	// for(int i=0;i<s;i++)
	// 	cout<<arr[0][i]<<" ";
	// cout<<endl;
	for(int i=0;i<s-1;i++){
		if(arr[0][i]>arr[0][i+1]){
			return false;
		}
	}
	return true;
}



int main(){
	// freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		vector<vector<int>> mat(2);
		for(int i=0;i<a;i++){
			int c;
			cin>>c;
			mat[0].push_back(c);
		}
		for(int i=0;i<a;i++){
			int c;
			cin>>c;
			mat[1].push_back(c);
		}
		if(space(mat))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	
}