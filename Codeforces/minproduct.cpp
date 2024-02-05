#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		long long int a,b,x,y,n;cin>>a>>b>>x>>y>>n;
		long long int pa = a-x;
		long long int pb = b-y;
		long long int ta = pa,tb = pb,tn = n;

		
		long long int e = min(pa,n);
		n -= e;
		pa -= e;

		e = min(pb,n);
		n -= e;
		pb -= e;
		// cout<<pa<<" "<<pb<<" ";
		// cout<<(x+pa)*(y+pb)<<endl;
	
		e = min(tb,tn);
		tn -= e;
		tb -= e;

		e = min(ta,tn);
		tn -= e;
		ta -= e;
		// cout<<ta<<" "<<tb<<" ";
		// cout<<(x+ta)*(y+tb)<<endl;
		long long int g1 = (long long int )((long long int )x+ta)*((long long int)y+tb);
		long long int g2 = (long long int )((long long int )x+pa)*((long long int)y+pb);
		if(g1<g2)
			cout<<(g1)<<endl;
		else
			cout<<(g2)<<endl;
	}
	return 0;

}