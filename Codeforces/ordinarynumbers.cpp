#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n;
       cin>>n;
       
      int s = 10;
      int c = 0;
      bool notord = false;
     while(n>=s){
        s = s*10;
        c++;}
     
    if(c==0){
        cout<<n<<endl;
    } 
    else{
        int f = n/(s/10);

        int ord = f;
        int power = 10;
        for(int i=0;i<c;i++){
            ord += f*power;
            power *= 10;
        }
        if(n >= ord)
            notord = false;
        else
            notord = true;

        int sol;
        if(notord)
            sol = 9*(c)+ f-1;
        else
            sol = 9*(c)+ f;
        cout<<sol<<endl;
    }
    }
}
