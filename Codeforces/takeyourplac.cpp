#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define FR(i,a,b) for(int i=a;i<b;++i)
#define rng(a,b) for(int i=a;i<b;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back
#define nl cout<<endl 
#define F first
#define S second
#define __ << " " << 
#define ar array
#define sortit(x) sort(x.begin(),x.end())
#define umap unordered_map
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
//template<class T>
//void swap(T &a,T &b){
//    T t=a;
//    a=b;
//    b=t;
//}
struct DSU{
    int n;
    vint p;
    DSU(int N){
        n = N;
        p.assign(n+1,-1);
        for(int i=0;i<=n;++i)p[i] = i;
    }
    int find(int i){
        if(p[i]==i)return i;
        return p[i] = find(p[i]);
    }
    void merge(int a,int b){
        a = find(a),b = find(b);
        if(a!=b) p[b] = a;
    }
};
void right_shift(vint &A,int i,int j){
    for(int k=j-1;k>=i;k--){
        A[k+1] = A[k];
    }
}
bool odd(int x){
    if(x%2)return true;
    return false;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #else
    #endif
    int t;
    cin>>t;
    while(t--){
       int n;        
       cin>>n;
       vint arr(n);
       vint temp(n);
       vint temp1(n);
       int d1=0,d2=0;
       FOR(n){
           cin>>arr[i];
           temp[i] = arr[i];
           temp1[i] = arr[i];
           if(arr[i]%2)d1++;
           else d2++;
       }

        if(abs(d1-d2)<=1 ){
            //first odd 
            int oc = 0;
            int oe = 0;
            int oi = 0;
            int ei = 0;
            while(oi < n && temp[oi]%2==0)oi++;
            while(ei < n && temp[ei]%2!=0)ei++;
//            cout<<"oi : "<<oi<<"ei : "<<ei<<endl;
            FOR(n){
                if(!odd(i)){
                    if(!odd(temp[i])){
                        while(oi<n && (temp[oi]%2==0 || i >= oi))oi++;
                        int g = temp[oi];      
                        oc+=oi-i;
                        right_shift(temp,i,oi);
                        temp[i] = g;
                        oi++;
                        while(oi<n && (temp[oi]%2==0 || i >= oi))oi++;
                     //   cout<<"oi : "<<oi<<"ei : "<<ei<<endl;
                    }
                }
                else if(odd(i)){
                    if(odd(temp[i])){

                        while(ei < n && (temp[ei]%2==1 || i>=ei ))ei++;
                        int g = temp[ei];
                        oc+=ei-i;
                        right_shift(temp,i,ei);
                        temp[i] = g;
                        ei++;
                        while(ei < n && (temp[ei]%2==1 || i>=ei ))ei++;
                    //    cout<<"oi : "<<oi<<"ei : "<<ei<<endl;
                    }
                }
            }
  //          cout<<"Oc:"<<oc<<endl;
            oi=0;ei=0;
            while(oi < n && temp1[oi]%2==0)oi++;
            while(ei < n && temp1[ei]%2==1)ei++;
            //first even
            FOR(n){
                if(!odd(i)){
                    if(odd(temp1[i])){
                        while(ei<n && (temp1[ei]%2==1 || i>=ei ))
                            ei++;
 
                        int g = temp1[ei];
                        oe += ei-i;
                        right_shift(temp1,i,ei);
                        temp1[i] = g;
                        ei++;
                        while(ei<n && (temp1[ei]%2==1 || i>=ei ))
                            ei++;
                    }
                }
                else if(odd(i)){
                    if(!odd(temp1[i])){
                        while(oi<n && (temp1[oi]%2==0|| i>=oi))
                            oi++;
 
                        int g = temp1[oi];
                        oe += oi-i;
                        right_shift(temp1,i,oi);
                        temp1[i]=g;
                        oi++;
                        while(oi<n && (temp1[oi]%2==0|| i>=oi))
                            oi++;
                    }
                }
//                cout<<" Oe: "<<oe<<endl;
            }

//           cout<<"Oc:"<<oc<<" Oe: "<<oe<<endl;
           if(d1==d2)
               cout<<min(oc,oe)<<endl;  
           else if(d1>d2)
               cout<<oc<<endl;
           else
               cout<<oe<<endl;
            
              
        }
        else{
            cout<<-1<<endl;
        }  
    }
    
}

