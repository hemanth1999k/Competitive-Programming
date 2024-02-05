#include <bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
class Solution{
public:
	
	void run(){
		int x,y,a,b;
		cin>>x>>y>>a>>b;
		int c=0;
		int i = a,j=b;
		while(i>x && j>y){
			i--;
			j--;
			c++;
		}
		cout<<c<<endl;
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