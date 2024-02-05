#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool space(vector<vector<int> > &mat,vector<int> &pos){
	for(int i=0;i<mat.size();i++){
		
		for(int j=0;j<mat[i].size();j++){
		
			bool claimed = false;
		
			if(mat[i][j]==0){

				for(int k=0;k<mat.size();k++){
					if(k!=i){
						if(mat[k][j]==1){
							claimed = true;
							break;
						}
					}
				}
				if(claimed==false)
					for(int k=0;k<mat[i].size();k++){
						if(k!=j){
							if(mat[i][k]==1){
								claimed = true;
								break;
							}
						}
					}
				
				if(!claimed){
					pos[0] = i;
					pos[1] = j;
					// cout<<pos[0]<<pos[1]<<endl;
					return true;
				}
			}
		}
	}
	// for(int i=0;i<mat.size();i++){
	// 		for(int j=0;j<mat[i].size();j++)
	// 			cout<<mat[i][j];
	// 		cout<<endl;
	// 	}

	return false;

}

int main(){
	freopen("input.txt","r",stdin);
	
	int n;
	cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		vector<vector<int> > mat(a);
		// int ones_count = 0;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				int k;
				cin>>k;
				mat[i].push_back(k);

			}
		}
		// int current_move = ones_count%2;
		char player='A';
		

		// for(int i=0;i<a;i++){
		// 	for(int j=0;j<b;j++)
		// 		cout<<mat[i][j];
		// 	cout<<endl;
		// }
		vector<int> pos(2,0);
		int count = 0;
		while(space(mat,pos)){
			count++;
			mat[pos[0]][pos[1]] = 1;
			// cout<<player<<pos[0]<<pos[1]<<endl;
			if(player=='A')
				player = 'V';
			else
				player = 'A';

			pos[0] = -1;
			pos[1] = -1;
		}
		// cout<<"L"<<count<<endl;
		if(player  == 'A')
			cout<<"Vivek"<<endl;
		else cout<<"Ashish"<<endl;

	}

	
	
}