#include<bits/stdc++.h>
using namespace std;
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define ll long long
#define vint vector<int>
#define vll vector<long long >
#define vstr  vector<string>
bool ISPRIME(long long n){
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}

int main(){
    int vs[] ={1,2,3,4,5,8,3,5,1,1,2,3,4,5,7,8,1,2,3,4,6,6,6,5,1,7};
    string s;
    cin>>s;
    int n = s.size();
    vector<int> arr[s.size()];
    for(int i=0;i<n;i++){
//        cout<<s[i]-'a'<<" ";
        arr[n-1].push_back(vs[s[i]-'a']);
       cout<<arr[n-1][i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int m = arr[n-i].size()-1;
        for(int j=0;j<m;j++){
            int x = arr[n-i][j] + arr[n-i][j+1];
            if(x>=10)x = x/10 + x%10;
            arr[n-i-1].push_back(x);
        }
    }
    FOR(n){
        int su=0;
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j];
            if(i==n-1)
                su+=arr[i][j];
        }
        if(su)
            cout<<": "<<su<<endl;
        cout<<endl;
    }
}

