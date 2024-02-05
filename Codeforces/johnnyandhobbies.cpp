#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	
	int n;
	cin>>n;
	while(n--){
		int t;
		cin>>t;
		vector<int> arr(t);
		for(int i=0;i<t;i++)
			cin>>arr[i];6
			
		if(t&1){
			cout<<-1<<endl;
			continue;
		}
		int counts[1025];
		memset(counts,0,sizeof counts);

		for(int i=0;i<t-1;i++)
			for(int j=i+1;j<t;j++)
				counts[arr[i]^arr[j]]+=1;
			
		
		bool f = false;
		for(int i=1;i<=1024;i++){
			if(counts[i]>=t/2 && counts[i]!=0){
				cout<<i<<endl;
				f = true;
				break;
			}
		}
		if(!f)
			cout<<-1<<endl;
		
	}
	
	
}