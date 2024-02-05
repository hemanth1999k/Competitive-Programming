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
bool ispalindrome(string x){
    int i=0;
    int j=x.size()-1;
    while(i<j){
        if(x[i] != x[j])
            return false;
        i++;j--;
    }
    return true;
}
int gcount(string s,char c){
    int count = 0;
    FOR(s.size()){
        if(s[i] == c)
            count++;
    }
    return count;
}
int fill(string &s,char c,int count){
    string s1,s2;
    s1 = s.substr(0,s.size()/2);
    if(s.size()%2)
        s2 = s.substr((s.size())/2+1,(s.size())/2);
    else
        s2 = s.substr((s.size())/2,(s.size())/2);
    reverse(s2.begin(),s2.end());
    FOR(s1.size()){
        if(s1[i]=='?'){
            if(s2[i] == c){count--;s1[i]=c;}
                
        }else if(s2[i] == '?'){
            
            if(s1[i] == c){count--;s2[i]=c;}
        }
    }
    FOR(s1.size()){
        if(s1[i] == '?'){
            if(s2[i] == '?' && count>1){
                s1[i] = c;
               s2[i] = c;
              count-=2; 
            } 
        }
    }
    cout<<"--"<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    reverse(s2.begin(),s2.end());
    if(s.size()%2==1){
        s = s1 + s[s.size()/2] + s2;
    }else
        s = s1+ s2;

    return count;  
}
void fail(int t=0){
    if(t==0)
    cout<<-1<<endl;
    else cout<<-1<<" "<<t<<endl;
}
void swap(int &a,int &b){
    int t = a;
    a = b;
    b = t;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
//    freopen("input.txt","r",stdin);
	int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> all;

        FOR(n){
            vint arr(m,0);
            for(int j=0;j<m;j++){
                cin>>arr[j];
                vint poos= {arr[j],i,j};
                all.PB(poos);
            }
        }
        sort(all.begin(),all.end());
        int mat[n][m];
        FOR(n){ for(int j=0;j<m;j++) mat[i][j] = 0;}
        
        for(int i=0;i<m;i++){
            vint inst = all[0];
            mat[inst[1]][i] = inst[0];
            all.erase(all.begin());
        }
        for(int i=0;i<all.size();i++){
            int j=0;
            vint inst = all[i];
            int r = inst[1];
            while(mat[r][j] != 0)
                j++;
            mat[r][j] = inst[0];
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }

}    






































