#include <bits/stdc++.h>
using namespace std;
int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> elements(n,0);
		for(int i=0;i<n;i++){
			cin>>elements[i];
		}
		sort(elements.begin(),elements.end());
		int mini = 1e9;
		for(int i=1;i<n;i++){
			if(mini>(elements[i]-elements[i-1])){
				mini = elements[i]-elements[i-1];
			}
		}
		cout<<mini<<endl;
		
	}
}