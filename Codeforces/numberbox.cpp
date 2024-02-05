#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}

using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		vector<vector<int>> arr(m,vector<int>(n,0));
		int counts = 0;
		bool zeropresent = false;
		vector<int> allnumbers;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
				allnumbers.push_back(abs(arr[i][j]));
				if(arr[i][j]<0)
					counts++;
				if(arr[i][j]==0)
					zeropresent = true;
			}
		}

		if(zeropresent){
			int sum = 0;
			FOR(allnumbers.size()){
				sum +=  abs(allnumbers[i]);
			}
			cout<<sum<<endl;
		}else{
			int mini = counts%2;
			sort(allnumbers.begin(),allnumbers.end());
			int i=0;
			while(mini--){
				allnumbers[i] = -allnumbers[i];
				i++;
			}
			int sum = 0;
			for(auto x:allnumbers)
				sum+= x;
			cout<<sum<<endl;

		}

	}
}