#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct pos{
  int x,y;
  pos(int a,int b){
    x = a;y=b;
  }
  pos(){
    x=0;y=0;
  }
  bool operator<(const pos& t) const
  {
    if(t.x < this->x)
      return true;
    else  if(t.y < this->y)
        return true;
    return false;
    
  }
};
int main(){

  
}
