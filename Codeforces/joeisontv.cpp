#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	freopen("input.txt","r",stdin);
	cin>>t;
	double s = 0.0;
	for(int i=1;i<=t;i++){
		s+= 1.0/i;
	}
	cout<<s<<endl;
}
