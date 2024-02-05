#include<bits/stdc++.h>
using namespace std;

int main()
{
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		int count = 0;
		if(a>b)
		{
			int g = a;
			a = b;
			b = g;
		}
		int diff = b-a;
		if(a<b){
			count+= diff/10;
			diff -= 10*((diff)/10);

			if(diff>0)
				count++;
		}
		cout<<count<<endl;
	}
	return 0;

}