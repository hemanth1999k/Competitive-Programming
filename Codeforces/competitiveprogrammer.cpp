#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	freopen("input.txt","r",stdin);
	cin>>t;

	while(t--){
		string x;
		cin>>x;
		int s =0;
		int arr[10];
		memset(arr,0,sizeof arr);
		for(int i=0;i<x.size();i++){
			arr[(x[i]-'0')]++;
			s = s + (x[i]-'0');
		}
		if(s==0)
			cout<<"red"<<endl;
		else
			if(arr[0]>0 && s%3 ==0){
				if(arr[0]>1 || (arr[2]>0 || arr[4]>0 || arr[6]>0 || arr[8]) )
					cout<<"red"<<endl;
				else cout<<"cyan"<<endl;
			}
			else
				cout<<"cyan"<<endl;
	}
}