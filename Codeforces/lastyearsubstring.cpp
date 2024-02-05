#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define endj cout<<endl
using namespace std;
bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}
vector<vector<int>> findsubstring(string s){
	
	vector<vector<int>> founds;
	for(int i=0;i<s.size();i++){
		if(s.substr(i,1) == "2"){
			int j = i+1;
			while(s.substr(j,3)!="020" && j+2 < s.size())
				j++;
			if(s.substr(j,3)=="020"){
				if(i+2 == j){
					founds.push_back(vector<int>{i,j+2,0});
				}
				
				else if(i+2<j)
				{
					founds.push_back(vector<int>{i,j+2,1});
				}
			}
		}
	}
	return founds;

}

int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int x;string s;
		cin>>x>>s;
		vector<vector<int>> tj = findsubstring(s);

		// for(auto i:tj){
		// 	for(auto p:i)
		// 		cout<<p<<" ";
		// 	cout<<endl;
		// }

		{
			if(tj.size()==0){
				cout<<"NO"<<endl;
			}
			else{
				bool poss = false;
				for(auto bb:tj){
					int st = bb[0];
					int e = bb[1];
					int brea = bb[2];
					
					if(brea==1){
						if(st == 0 && e == s.size()){
							poss = true;
						}
					}
					else if(brea == 0){
						if(st == 0){
							poss = true;
						}else if(e == s.size())
							poss = true;
					}
					if(poss)
						break;
				}
				if(poss)
						cout<<"YES"<<endl;
					else
						cout<<"NO"<<endl;
			}
		}
	}
}

