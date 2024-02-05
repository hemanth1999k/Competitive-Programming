#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution{
public:
	
	void run(){
		ll n,m;
		cin>>n>>m;
		cout<<(int)ceil(n*m/2.0)<<endl;

	}
};

int main(){
	freopen("input.txt","r",stdin);
	Solution s;
	int t;
	cin>>t;
	while(t--){
		s.run();
	}
}