#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		vector<char> workings;
		map<char,int> f;
		for(int i=0;i<x.size();i++){
			int count = 1;
			for(int j=i;j<x.size();j++){
				if(j+1<x.size() && x[j+1]==x[i])
					count++;
				else{
					i=j;
					break;
				}
			}
			if(count%2==1)
				workings.push_back(x[i]);
		}
		set<char> res(workings.begin(),workings.end());
		
		vector<char> sorted;
		for(auto c:res)
			sorted.push_back(c);
		sort(sorted.begin(),sorted.end());
		for(auto g:sorted)cout<<g;
		cout<<endl;
	}
}

