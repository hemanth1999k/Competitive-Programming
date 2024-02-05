#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
int main(){
	// freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		vector<int> odd_indices;
		vector<int> even_indices;
		int e=0;
		int o=0;
		bool even = true;
		for(int i=0;i<n;i++){ cin>>arr[i]; 
			if(arr[i]%2!=i%2){even = false;
				if(arr[i]%2==0)
					e++;
				else
					o++;
			}	

		}
		if(even)
			cout<<0<<endl;
		else{
			if(e==o)
				cout<<o<<endl;
			else
				cout<<-1<<endl;
		}

	}
}