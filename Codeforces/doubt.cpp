#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt","r",stdin);
	ifstream ii("input.txt");
	string s;
	int i;
	ii>>s>>i;
	cout<<i<<endl;
	cout<<s<<" A "<<i<<endl;
	return 0;
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<s<<endl;
	    int n = s.length();
	    vector<string> v;
	    string tem;
	    string result="";
	    for(int i=0;i<n;i++){
	        if(s[i]!='.')tem+=s[i];
	        if(s[i]=='.'){
	        	v.push_back(tem);
	        	tem="";
	        }
	    }
	    
	    for(int i=v.size()-1;i>=0;i--){
	        if(i!=0){
	            result = result + v[i];
	            string dot = ".";
	            // cout<<result<<endl;
	            result = result + dot;
	            // cout<<result;
	        }
	    }
	     cout<<result<<endl;
	    
	}
	return 0;
}