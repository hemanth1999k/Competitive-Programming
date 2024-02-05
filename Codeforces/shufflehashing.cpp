#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		string p,h;
		cin>>p>>h;
		if(p.size()>h.size()){

			cout<<"NO"<<endl;
			continue;
		}
		int arr[26],harr[26];
		memset(arr,0,sizeof arr);
		memset(harr,0,sizeof harr);
		for(int i=0;i<p.size();i++){
			harr[h[i]-'a']++;
			arr[p[i]-'a']++;
		}

		bool find=1;
		for(int i=0;i<=h.size()-p.size();i++){
			if(i!=0){
				harr[h[i-1]-'a']--;
				harr[h[p.size()+i-1 ]-'a']++;
			}
			find = 1;
			for(int j=0;j<26;j++)
				if(arr[j]!=harr[j]){
					find = 0;
					break;
				}
			if(find)
				break;
		}
		if(find)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	

	}
}

(4,3) *(3,2) = (4,2)

(4,2) * (2,3)