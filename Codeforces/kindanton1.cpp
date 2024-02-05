#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
	bool val = true;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			val = false;
		}
	}
	return val;
}
bool isnumberpalin(int x){

	string s;
	while(x>0){
		int t= x%10;
		x = x/10;
		s += (char)(48+(t));
	}
	return palindrome(s);
}
int main(){
	cout<<isnumberpalin(104301)<<endl;
}

// int main(){
// 	freopen("input.txt","r",stdin);
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;cin>>n;int a[n],b[n];
// 		for(int i=0;i<n;i++)cin>>a[i];
// 		for(int j=0;j<n;j++)cin>>b[j];

// 		bool arr[] = {0,0};
// 		for(int i=n-1;i>=0;i--){
// 			if(a[i]==1)arr[0] =0;
// 			if(a[i]==-1)arr[1] = 0;

// 			if(a[i]>b[i])arr[1] = 1; 
// 			if(a[i]<b[i])arr[0] = 1;

// 		}
// 		if(arr[0]==0 && arr[1]==0)
// 		cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;	

// 	}
// }
