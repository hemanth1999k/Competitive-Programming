#include<bits/stdc++.h>
#define ll long long
#define dd double
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> arr(n);
		vector<int> wealthy;
		vector<int> poor;
		dd wsum = 0;
		dd psum = 0;
		dd wcount = 0,pcount = 0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>=x){
				wealthy.push_back(arr[i]);
				wsum += arr[i];
				++wcount;
			}
			else{
				poor.push_back(arr[i]);
				psum += arr[i];
				++pcount;
			}
		}
		sort(wealthy.begin(),wealthy.end());
		sort(poor.begin(),poor.end());

		if(wsum==0){
			cout<<0<<endl;
		}else{
			int p_index = 0;
			bool found = false;
			while((wsum+psum)/(wcount+pcount) < x){
				if(p_index < poor.size()){
					psum -= poor[p_index];
					pcount--;
					p_index++;
				}else{
					found = true;
					break;
				}
			}
			if(found){
				cout<<0<<endl;
			}else{
				cout<<(wcount+pcount)<<endl;
			}
		}


	}
}