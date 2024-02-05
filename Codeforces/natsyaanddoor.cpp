#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> mous(n);
		vector<int> peaks;
		for(int i=0;i<n;i++){
			cin>>mous[i];
		}
		
		for(int i=1;i<n-1;i++){
			if(mous[i-1]<mous[i] && mous[i]>mous[i+1]){
				peaks.push_back(i-1);
			}
		}
		int maxpeaks =0;
		int ls;
		int curpeaks = 0;
		int endpeaks = 0;
		queue<int> selected;
		for(auto x:peaks){
			if(x>=0 && x<=k-3){
				curpeaks++;
				selected.push(x);
				if(curpeaks>maxpeaks){
					maxpeaks = curpeaks;
					endpeaks++;
				}
			}
		}
		ls = 0;
		for(int l=1;l<n-k+1;l++){
			if(!selected.empty() && selected.front()<l){
				selected.pop();
				curpeaks--;
			}
			for(int i=endpeaks;i<peaks.size();i++){
				if(peaks[i]<= l+k -3){
					curpeaks++;
					endpeaks++;
					selected.push(peaks[i]);
					if(curpeaks>maxpeaks){
						maxpeaks = curpeaks;
						ls = l;
					}
				}else
					break;
			}
			if(maxpeaks  == k-1)
				break;
		}
		cout<<maxpeaks+1<<" "<<ls+1<<endl;
	}
}