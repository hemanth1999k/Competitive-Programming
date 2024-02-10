#include <iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
  vector<int> vect;
  std::priority_queue<int> q;

  for(int i=0;i<10;i++)
    q.push(i);

  
    cout<<q.top()<<endl;
    
  
  return 0;
}
