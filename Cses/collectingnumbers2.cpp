#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back
#define nl "\n"
#define F first
#define S second
#define __ << " " << 
#define ar array
#define sortit(x) sort(x.begin(),x.end())

using namespace std;
template <typename T>
void insert(vector<T> &vec, T x ){
	auto it = vec.lower_bound(x);
	vec.insert(it,x);
}
bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}
void swap(int &a,int &b){
    int t = a;
    a = b;
    b = t;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
    int n,t;
    cin>>n>>t;
    vint arr(n+2);
    vint pos(n+2,0);
    for(int i=1;i<=n;i++){ 
        cin>>arr[i];
        pos[arr[i]] = i;
    }
    arr[n+1] = n+1;
    pos[n+1] = n+1;
    //for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
    //cout<<nl;
    //for(int j=1;j<=n;j++)cout<<pos[j]<<" ";
    int count = 0;


    FOR(t){
        int a,b;cin>>a>>b;
        swap(arr[a],arr[b]);
        int vata=arr[a],vatb = arr[b];
        bool ba = pos[vata] < pos[vata+1]; 
        bool bb = pos[vatb] < pos[vatb+1];
        swap(pos[vata],pos[vatb]);
        cout<<arr[a] __ arr[b] <<nl;
        cout<<pos[vata] __ pos[vatb] <<nl;
        count = 0; 
        if(vata<=n){
            if(ba && pos[vata] > pos[vata+1])
                count++;       
            else if(!ba && pos[vata] < pos[vata+1])
                count--;
        }
        if(vatb<=n)
            if(bb && pos[vatb] > pos[vatb+1])
                count++;
            else if(!bb && pos[vatb] < pos[vatb+1])
                count--;
        cout<<"C "<<count<<nl;
        cout<<nl;
    }
    
    
}

