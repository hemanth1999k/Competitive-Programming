
#include<bits/stdc++.h>
#define ll long long
using namespace std;
using namespace chrono;
#define mod 1000000007
class timer: high_resolution_clock {
    const time_point start_time;
public:
    timer(): start_time(now()) {}
    rep elapsed_time() const { return duration_cast<milliseconds>(now()-start_time).count(); } };

int main(){
	freopen("input.txt","r",stdin);
	timer t;
	int t;
	cin>>t;
	while(t.elapsed_time() < 1000 && t--){
		int n;
		cin>>n;
		vector<int> arr(2*n);
		vector<int> odds,evens,evens_ind,odds_ind;
		//separating odd and even numbers and also their indices
		for(int i=0;i<2*n;i++){
			cin>>arr[i];
			if(arr[i]%2){

				odds.push_back(arr[i]);
				odds_ind.push_back(i);
			}
			else{
				evens.push_back(arr[i]);
				evens_ind.push_back(i);
			}
		}
		for(int i=1;i<evens.size() && n>1 ;i+=2){
			cout<<evens_ind[i-1]+1<<" "<<evens_ind[i]+1<<endl;
			n--;
		}
		for(int i=1;i<odds.size() && n>1 ;i+=2){
			cout<<odds_ind[i-1]+1<<" "<<odds_ind[i]+1<<endl;
			n--;
		}
	
	}
}