#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<"NO"<<endl;
			continue;
		}
		int odds=0,evens=0;
		vector<int> elements(n,0);
		std::vector<int> odd;
		std::vector<int> even;
		for(int i=0;i<n;i++){
			cin>>elements[i];
			if(elements[i]%2){
				odds++;
				odd.push_back(elements[i]);
			}
			else{
				evens++;
				even.push_back(elements[i]);
			}
		}
		sort(odd.begin(),odd.end());
		sort(even.begin(),even.end());

		if(odds%2==0 && evens%2==0)
			cout<<"YES"<<endl;
		else{
			
			int p =0;
			for(int i=0;i<odd.size();i++){
				for(int j=0;j<even.size();j++){
					if(odd[i]-even[j]<-1){
						break;
					}else if(abs(odd[i]-even[j]) == 1){
						p+=1;
					}
				}
			}
			while(p--){
				odds-=1;
				evens-=1;
				if(odds%2==0 && evens%2==0){
					break;
				}
			}
			if(odds%2==0 && evens%2==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
}