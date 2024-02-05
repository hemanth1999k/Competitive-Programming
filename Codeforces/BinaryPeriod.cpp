#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		int period = -1;
		for(int k=1;k<x.size();k++){
			bool fini = false;
			for(int i=0;i<x.size()-k;i++){
				if(x[i]!=x[i+k]){
					fini = true;
					break;
				}
			}
			if(fini){
				continue;
			}else{
				period = k;
				break;
			}
		}
		if(period==-1)
			period = x.size();
		
		if(period>2){
			vector<int> positions;
			for(int i=0;i<x.size()-1;i++){
				if(x[i]==x[i+1])
					positions.push_back(i);
			}

			string ns;
			int pi=0;
			for(int i=0;i<x.size();i++){
				if(pi<positions.size() && i == positions[pi]){
					ns += x[i];
					if(x[i]=='0')
						ns+="1";
					else
						ns+="0";
					pi++;
				}else{
					ns+=x[i];
				}
			}
			cout<<ns<<endl;
		}
		else{
			cout<<x<<endl;
		}
	}
}