#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution{
public:
	
	void run(){
		int n,m;
		cin>>n>>m;
		vector<string> vec;
		string s;
		for(int i=0;i<n;i++){
			cin>>s;
			vec.push_back(s);
		}
		string ans = vec[0];
		for(int i=0;i<m;i++){
			char s = ans[i];
			for(char g='a';g<='z';g++){
				ans[i] = g;
				bool flag = true;
				for(int j=0;j<n;j++){
					int count=0;
					for(int k=0;k<m;k++){
						if(vec[j][k]!=ans[k])
							count++;
					}
					if(count>1){
						flag = false;
						break;
					}
				}
				if(flag){
					cout<<ans<<endl;
					return;
				}
			}
			ans[i] = s;
		}
		cout<<-1<<endl;
	
}
};
int main(){
	// freopen("input.txt","r",stdin);
	Solution s;
	int t;
	cin>>t;
	while(t--){
		s.run();
	}
}
