#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>

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
	bool arr[t][t];
	FOR(t){
		for(int j=0;j<t;j++)arr[i][j] = false;
	}
	ll count = 0;
	for(int a=1;a<=t;a++){
		int i=0,j = a-1;
		for(int b=1;b<=a+a-1;b++){
			// cout<<i<<" "<<j<<endl;
			if(arr[i][j]==false)
				arr[i][j]=true;

			int r,c;
			int rem = ((a + a-1-1));
			
			// r = i-2;
			// c = j-1;
			// if(r >=0 && r<a && c>=0 && c<a)rem--;
			

			// r = i-2;
			// c = j+1;
			// if(r >=0 && r<a && c>=0 && c<a)rem--;
			

			r = i+2;
			c = j-1;
			if(r >=0 && r<a && c>=0 && c<a)rem--;
			

			r = i+2;
			c = j+1;
			if(r >=0 && r<a && c>=0 && c<a)rem--;
			
			// r = i+1;
			// c = j-2;
			// if(r >=0 && r<a && c>=0 && c<a)rem--;
			
			r = i+1;
			c = j+2;
			if(r >=0 && r<a && c>=0 && c<a)rem--;
			

			// r = i-1;
			// c = j-2;
			// if(r >=0 && r<a && c>=0 && c<a)rem--;
			
			r = i-1;
			c = j+2;
			if(r >=0 && r<a && c>=0 && c<a)rem--;

			if(rem>0)
				count+= rem;

			if(b<=a-1)
				i++;
			else
				j--;
		}
		cout<<count<<endl;
	}

}
