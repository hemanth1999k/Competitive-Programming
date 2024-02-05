
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int x,y,z,a,b,c;
		cin>>x>>y>>z;
		cin>>a>>b>>c;
		
		
		
		// for(auto g: as)cout<<g<<" ";
		// 	cout<<endl;
 
		int total = 0;
		int t=0,typ=0;
 
		if(z>0){
			t = z;
			typ = 2;	
			z=0;
		}else if(y>0){
			t = y;
			typ = 1;
			y = 0;
		}else if(x>0){
			t = x;
			typ = 0;
			x = 0;
		}
		
		for(;t>0;t--){
			// cout<<":"<<t<<":"<<total<<endl;
			if(typ==2){
 
				if(b>0){
					int q= min(t,b);
					total+=2*q;
					b-=q;
					t -= q;
					
					if(t==0)t=1;
					
				}else if(c>0){
					
					int q= min(t,c);
					c-=q;
					t-=q;
					if(t==0)t=1;
					// bs.push_back(2);
				}else if(a>0){
					
					int q= min(t,a);
					a-=q;
					t-=q;
					if(t==0)t=1;
					// bs.push_back(0);
				}
				// printf("%d %d %d %d %d %d\n",x,y,t,a,b,c);
			}
			if(typ==1){
				if(b>0){
					// bs.push_back(1);
					
					int q= min(t,b);
					b-=q;
					t-=q;
					if(t==0)t=1;
				}else if(a>0){
					// bs.push_back(0);
					int q= min(t,a);
					a-=q;
					t-=q;
					if(t==0)t=1;
				}else if(c>0){
					
					// bs.push_back(2);
					int q= min(t,c);
					c-=q;
					t-=q;
					if(t==0)t=1;
					total -= 2*q;

				}
				// printf("%d %d %d %d %d %d\n",x,t,z,a,b,c);
 
			}
			// cout<<a<<" "<<b<<" "<<c<<endl;
			if(typ==0){
				if(a>0){
					// bs.push_back(0);
					int q= min(t,a);
					a-=q;
					t-=q;
					if(t==0)t=1;
				}
				else if(b>0){ 
					int q= min(t,b);
					b-=q;
					t-=q;
					if(t==0)t=1;
					// bs.push_back(1);
				}
				else if(c>0){ 
					int q= min(t,c);
					c-=q;
					t-=q;
					if(t==0)t=1;
				}//bs.push_back(2);}
				// printf("%d %d %d %d %d %d\n",t,y,z,a,b,c);
			}
			if(t-1==0)
			{
				// cout<<t<<"BB"<<endl;
				if(y>0)
				{
					t = y+1;
					y = 0;
					typ = 1;
				}else if(x>0){
					t = x+1;
					x = 0;
					typ = 0;
				}
				// cout<<t<<"AA"<<endl;
			}
		}
		cout<<total<<endl;
		
 
	}
 
}