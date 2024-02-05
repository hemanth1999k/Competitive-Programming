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
////template<class T>
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
void f(int *a,int m){
    int j=0;
    for(j=0;j<m;j++)
        *(a+j) = *(a+j)-5;
}
int Decode(char* pStr){
    int iRetVal = 0;
    if(pStr){
        while(*pStr && *pStr <= '9' && *pStr >= '0'){
            iRetVal = (iRetVal * 10) + (*pStr - '0');
            pStr++;
        }
    }
    return iRetVal;
}
int fun(int n){
    if(n!=0){
        return n-fun(n-5);
    }else {
        return n;
    }
}
int calc(int x,int *py, int **ppz){
    int y, z;
    *ppz +=1;
    z = **ppz;
    *py += **ppz;
    y = *py;
    x += *py;
    return x + y+ z;
}
int incr(int i){
    static int count = 5;
    count = count + i;
    return count;
}
int m=0;
void swap(char *x ,char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
}

void calculate(char *a, int i,int n){
    int j=0;
    if(i==n){
        m++;
    }
    else{
        for(j=i;j<=n;j++){
            swap((a+i),(a+j));
            calculate(a,i+1,n);
            swap((a+i),(a+j));
        }
    }
}
int main(){
    int i=0,j=0,c=0;
    char str[] = {"ZohoCorp Pvt Ltd Based on Chennai"};
    while(str[i]!='\0'){
        j = i;
        while((str[j]!=' ') && (str[j]!='\0')){
            j =i;
            while((str[j]!=' ') && (str[j]!='\0')){
                j++;
            }
            if(str[j] == ' ')c++;
            i=j+1;
        }
        printf("%d \n",c);
    }
}
//int main(){
//    int c,*b,**a;
//    c = 7;
//    b = &c;
//    a=&b;
//    printf("%d",calc(c,b,a));
//}

