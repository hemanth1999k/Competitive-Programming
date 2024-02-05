#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
	
	int n;
	cin>>n;
	int x=0;
	while(n--){
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]=='+'){
				x++;
				break;
			}
			else if(s[i]=='-'){
				x--;
				break;
			}else{
				continue;
			}
		}
	}
	cout<<x<<endl;
	
}