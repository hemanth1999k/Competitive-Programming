#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
		int x,y,a;
		vector<int>num;
		char u;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			u = s[i];
			if(u>=48)
				num.push_back(u-48);
		}
		sort(num.begin(),num.end());
		for(int i=0;i<num.size();i++){
			cout<<num[i];
			if(i+1<num.size())
				cout<<'+';
		}
		
		return 0;

		// cout<<abs(2-x)+abs(2-y)<<endl;

}