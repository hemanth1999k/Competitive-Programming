#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
		string x,y;
		cin>>x;
		cin>>y;
		int res = 0;
		for(int i=0;i<x.size();i++)	{
			char xchar,ychar;
			// cout<<(int)x[i]<<endl;
			if(x[i]<=91)
				xchar = x[i]-65 + 97;
			else
				xchar = x[i];
			if(y[i]<=91)
				ychar = y[i]-65+ 97;
			else
				ychar = y[i];

			// cout<<(int)xchar<<" "<<(int)ychar<<endl;
			if(xchar > ychar){
				res = 1;
				break;
				
				
			}else if(xchar==ychar){
				continue;
			}else{
				res = -1;
				break;
			}
		}
		cout<<res<<endl;


}