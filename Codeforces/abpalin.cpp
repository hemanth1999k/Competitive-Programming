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
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
       int a,b;cin>>a>>b;
       bool invalid = false;
       if((a+b)%2){//odd
    
           string s;
           cin>>s;
           string s1,s2;
           s1 = s.substr(0,(a+b)/2);
           s2 = s.substr((a+b)/2+1,(a+b)/2);
           reverse(s2.begin(),s2.end());
           int tot = (a+b);


           for(int i=0;i<tot;i++)
               if(s[i] == '1')b--;
               else if(s[i] == '0')a--;
//           cout<<"0 s"<<a<<" 1s "<<b<<endl;
           if(a<0 || b<0){cout<<-1<<endl;continue;}


           for(int i=0;i<tot/2;i++){
 //              cout<<s1<<" "<<s2<<" "<<a<<" "<<b<<endl;  
               if(s1[i] == '?'){
                   if(s2[i]!='?'){
                       s1[i] = s2[i];
                       if(s2[i]=='0')a--;
                       else b--;
                   }
                   else{
                       if(a>1){
                           s1[i] = '0';
                           s2[i] = '0';
                           a-=2;
                       }else if(b>1){
                           s1[i] = '1';
                           s2[i] = '1';
                           b-=2;
                       }
                       else{
                           invalid = true;
                           break;
                       }
                   }
               }
               else if(s2[i] == '?'){
                   if(s1[i]!='?'){
                       s2[i] = s1[i];
                       if(s1[i]=='0')a--;
                       else b--;
                   }
                   else{
                       if(a>1){
                           s2[i] = '0';
                           s1[i] = '0';
                           a-=2;
                       }else if(b>1){
                           s2[i] = '1';
                           s1[i] = '1';
                           b-=2;
                       }
                       else{
                           invalid = true;
                           break;
                       }
                   }
               }
               else if(s1[i] != s2[i])
               {
                   invalid = true;break;}

           }
           if(invalid ){cout<<-1<<endl;}
           else{
                if(s[tot/2] == '?'){
                    if(a>0)s[tot/2] = '0';
                    else if(b>0)s[tot/2] = '1';
                    else invalid = true;
                }
               reverse(s2.begin(),s2.end());
               string ans = s1+s[tot/2]+ s2;
               if(!ispalindrome(ans))
                    cout<<-1<<endl;
               else cout<<ans<<endl;
           }

       }
       else{
           string s;
           cin>>s;

           string s1,s2;
           s1 = s.substr(0,(a+b)/2);
           s2 = s.substr((a+b)/2,(a+b)/2);
           int tot = (a+b);
            for(int i=0;i<(tot);i++)
               if(s[i] == '1')b--;
               else if(s[i] == '0')a--;

          
           if(a<0 || b<0){cout<<-1<<endl;continue;}
           reverse(s2.begin(),s2.end());


            for(int i=0;i<tot/2;i++){
                
               if(s1[i] == '?'){
                   if(s2[i]!='?'){
                       s1[i] = s2[i];
                       if(s2[i]=='0')a--;
                       else b--;
                   }
                   else{
                       if(a>1){
                           s1[i] = '0';
                           s2[i] = '0';
                           a-=2;
                       }else if(b>1){
                           s1[i] = '1';
                           s2[i] = '1';
                           b-=2;
                       }
                       else{
                           invalid = true;
                           break;
                       }

                   }
               }
               else if(s2[i] == '?'){
                   if(s1[i]!='?'){
                       s2[i] = s1[i];
                       if(s1[i]=='0')a--;
                       else b--;
                   }
                   else{
                       if(a>1){
                           s2[i] = '0';
                           s1[i] = '0';
                           a-=2;
                       }else if(b>1){
                           s2[i] = '1';
                           s1[i] = '1';
                           b-=2;
                       }
                       else{
                           invalid = true;
                           break;
                       }

                   }
               }
               else if(s1[i] != s2[i])
               {
                   invalid = true;break;
               }

           }
            
           if(invalid   ){cout<<-1<<endl;}
           else{
               reverse(s2.begin(),s2.end());
               string ans = s1+ s2;
               if(!ispalindrome(ans))
                    cout<<-1<<endl;
               else cout<<ans<<endl;
           }

       }

       
    }
} 


