#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		int l = x.size();
		int count = (x.size()-1)*9;
		char c = x[0];
		for(auto p:x){
			if(c!=p){
				c = 0;break;
			}
		}
		int nn = stoi(x);
		string uu = "";
		for(int i=0;i<l;i++)
			uu += x[0];
		int ntemp = stoi(uu);
		
		if(nn < ntemp)
			count = count + (x[0]-'0' - 1);
		else if(nn >= ntemp)
			count = count + (x[0] - '0');
		cout<<count<<endl;
		

	}	
}
