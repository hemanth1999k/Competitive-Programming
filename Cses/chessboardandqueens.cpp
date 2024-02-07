#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back 
#define pint pair<int,int>
#define F first
#define S second
#define nl "\n"

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}



using namespace std;
int count =0;
bool collides(int x,int y,int i,int j){
	if(x==i)
		return true;
	if(y==j)
		return true;
	if((x-y)==(i-j))
		return true;
	if((x+y)==(i+j))
		return true;
	return false;
}

void check(vstr &arr,vector<pint> &placed,int r){
	for(int j=0;j<8;++j){
		if(arr[r][j]=='.'){
				bool nothingcollides = true;
				for(auto p:placed){
					int x =p.F,y = p.S;
					if(collides(x,y,r,j)){
						nothingcollides = false;
						break;
					}
				}
				if(nothingcollides){
					if(r==7)
						::count++;
					else{
						placed.PB(pair<int,int>(r,j));
						check(arr,placed,r+1);
						placed.pop_back();
					}
				}
			}
	}
}
void countit(vstr arr){
	vector<pint> placed;
	check(arr,placed,0);

}
int main(){
	// freopen("input.txt","r",stdin);
	
	vstr arr;
	string s;
	while(cin>>s){
		arr.PB(s);
	}
	// FOR(arr.size())cout<<arr[i]<<nl;

	countit(arr);
	cout<<::count;
	return 0;
	
}
