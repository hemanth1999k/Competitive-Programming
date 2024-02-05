#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> a(n);
		int c;
		int odds = 0;
		int evens = 0;
		for(int i=0;i<n;i++){
			cin>>c;
			if(c%2==0)
				evens++;
			if(c%2)
				odds++;
		}

		if(odds ==0)
			cout<<"No"<<endl;
		else{
			
				if(evens==0){
					if(x%2==0)
						cout<<"No"<<endl;
					else
						cout<<"Yes"<<endl;
				}
				else if(odds+evens==x && odds%2==0 ){
					cout<<"No"<<endl;
				}
				else
					cout<<"Yes"<<endl;
			}
		
	}
}