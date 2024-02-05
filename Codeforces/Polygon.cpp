#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution{
public:
	int n;
	vector<vector<char> > mat;
	vector<pair<int,int> >cannons;
	void run(){
		int t;
	cin>>t;
	while(t--){
		
		cin>>n;
		mat.clear();
		cannons.clear();
		char a;

		for(int i=0;i<n;i++){
			mat.push_back(vector<char>());
			for(int j=0;j<n;j++){

				cin>>a;
				// cout<<a<<endl;
				if(a=='1'){
					
					mat[i].push_back('1');
					cannons.push_back(pair<int,int>(i,j));
				}
				else
					mat[i].push_back('0');
			}
		}
		// cout<<"End"<<endl;

		bool failed = false;
		for(int i=0;i<n;i++){
			if(mat[i][n-1]=='1'){

				if(makeit(i,n-1))
					continue;
				else{
					failed = true;
					// cout<<"failed1"<<endl;
					break;
				}
			}
		}
		if(!failed){
			for(int i=0;i<n;i++){
				// cout<<mat[n-1][i]<<endl;
				if(mat[n-1][i]=='1'){
					// cout<<"hee"<<endl;
					if(makeit(n-1,i))
						continue;
					else{
						failed = true;
						// cout<<"failed2"<<endl;
						break;
					}
				}
			}	
		}else{
			cout<<"NO"<<endl;
			continue;
		}
		if(!failed && cannons.empty()){
			cout<<"YES"<<endl;
		}else{
			// cout<<failed<<" "<<cannons.size()<<endl;
			cout<<"NO"<<endl;
		}
	}
	}
	bool makeit(int x,int y){
		bool success = false;
		// cout<<"Here"<<endl;
		if(x==n-1 || y==n-1){
			mat[x][y]='2';
			std::vector<pair<int,int> >::iterator it;
			it  = std::find(cannons.begin(),cannons.end(),pair<int,int>(x,y));
			cannons.erase(it);
			// cout<<mat[x][y]<<endl;
			success=true;
		}
		else if(mat[x+1][y]=='2' || mat[x][y+1]=='2'){
			mat[x][y]='2';
			std::vector<pair<int,int> >::iterator it;
			it  = std::find(cannons.begin(),cannons.end(),pair<int,int>(x,y));
			cannons.erase(it);
			// cout<<mat[x][y]<<x<<" "<<y<<" "<<cannons.size()<<endl;
			success = true;

		}else{
			// cout<<"returned"<<endl;
			return false;
		}
		// if(x>0)
			// cout<<mat[x-1][y]<<endl;
		if(x>0 && mat[x-1][y]=='1'){
			
			success =  success && makeit(x-1,y);
			// cout<<"Here"<<success<<x-1<<y<<endl;
		}
		if(y>0 && mat[x][y-1]=='1')
			success =  success && makeit(x,y-1);
		return success;
	}
};
int main(){
	freopen("input.txt","r",stdin);
	Solution s;
	s.run();
}
