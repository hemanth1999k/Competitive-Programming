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
		if(x.size()==1)
			cout<<x<<endl;
		else{
			for(int i=0;i<26;i++){
				int count = 1;
				bool start = false;
				bool works = false;
				bool found = false;

				if(x[0]=='a'+i)
					found = true;

				for(int j=1;j<x.size();j++){
					if(x[j]==('a'+i) )
						found = true;
					if(x[j] == x[j-1] && x[j]==('a'+i) ){
						count++;
						start = true;
					}else{
						if(start){
							cout<<"s";
							start = false;
							if(count%2==1){
								cout<<"Break "<<(char)('a'+i)<<endl;
								works = true;
								break;
							}
						}
						if(x[j]==('a'+i) && j<x.size() && x[j+1]!=('a'+i) ){
							works = true;
							found = true;
							break;
						}
						if(x[j]==('a'+i) && j==x.size()-1){
							works = true;
							found = true;
							break;
						}
					}

					// cout<<found<<" "<<works<<endl;
					if(found && works)
						workings.push_back('a'+i);
				}
			}
			sort(workings.begin(),workings.end());
			for(auto g:workings)
				cout<<g;
			cout<<endl;
		}
	}
}