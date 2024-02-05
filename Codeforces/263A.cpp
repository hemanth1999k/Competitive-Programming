#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
		int x,y,a;
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){

				cin>>a;
				if(a==1){
					x = i;
					y = j;
					break;
				}
			}
		}
		cout<<abs(2-x)+abs(2-y)<<endl;

}