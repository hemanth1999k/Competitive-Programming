#include <bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
class Solution{
public:
	
	void run(){
		ll x,y,a,b;
		cin>>x>>y>>a>>b;
		cout<<(a-x)*(b-y)+1<<endl;
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