#include<iostream>
#include<vector>
#define ll int
using namespace std;
int main(){
  int t,n,constructed;
  ll remcards;
  vector<ll> cards{0};
  
  cin>>t;
  while(t--){
    cin>>remcards;
    constructed = 0;
    
    while(remcards>=2){
      int h = 0;
      while(cards[h]<remcards){
        h++;
        if(h==cards.size()){
         
          int k = 2+ cards[h-1] + (h-1)*3;
          cards.push_back(k);
        }
      }
      if(remcards < cards[h])
        h--;
      remcards-= cards[h];

      constructed++;
    }
    cout<<constructed<<" "<<remcards<<endl;

  }
}
