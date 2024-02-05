#include <bits/stdc++.h>
using namespace std;
class b{
public:
	int j=0;
};
class A{
	
	public:
		b *bb=NULL;
	void set(b &B){
		bb = &B;
	}
};
int main()
{
	freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	string a = "hello";
	string b = " world";
	string c = a+ b;
	cout<<c<< " "<<a<<" "<<b<<endl;

	return 0;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n),b(n);
		int negi=-1,posi =-1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==-1 && negi==-1)
				negi = i;
			if(a[i]==1 && posi ==-1)
				posi = i;
		}
		
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		if(n==1){
			if(a[0]==b[0]){
				cout<<"Yes"<<endl;
				continue;
			}else{
				cout<<"No"<<endl;
				continue;
			}

		}
		bool fini = true;
		// cout<<posi<<" "<<negi<<endl; 
		for(int i=n-1;i>=0;i--){
			
			if(a[i]!=b[i]){
				bool pos=false;
				
				if(b[i]>0 && posi>-1 && posi < i ){
					// cout<<"c1"<<endl;
					pos=1;
				}
				else if(b[i]<0 && negi>-1 && negi < i){
					// cout<<"c2"<<endl;
					pos=true;
				}else if(b[i]==0){
					if(a[i]>0 && negi>-1&& negi<i){
						// cout<<"c3"<<endl;
						pos=true;
					}else if(a[i]<0 && posi>-1 && posi<i){
						// cout<<"c4"<<endl;
						pos=true;
					}
				}

				
				if(!pos){
					fini = false;
					break;
				}
			}else{
				fini = true;
			}
		}
		if(fini)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

	}
	
}