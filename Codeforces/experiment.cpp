#include<bits/stdc++.h>
using namespace std;
class Bclass{
	
public:
	int a;
	Bclass(int x){
		a = x;
	}
};
class Aclass{
	Bclass bcla();
	vector<Bclass> intes;
public:
	Aclass(){
		Bclass b1(3);
		Bclass *pb1 = &b1;
		Bclass b2(4);
		Bclass *pb2 = &b2;
		Bclass b3(5);
		Bclass *pb3 = &b3;
		Bclass b4(6);
		Bclass *pb4 = &b4;

		intes.push_back(*pb1);
		intes.push_back(*pb2);
		intes.push_back(*pb3);
		intes.push_back(*pb4);
		
		for(int i=0;i<intes.size();i++){
			cout<<intes[i].a<<endl;
		}

	}
	void loadintegers(){
		
	}

	void printit(){
		// cout<<intes.size()<<endl;
		for(int i=0;i<intes.size();i++){
			cout<<intes[i].a<<endl;
		}
	}

};
int main(){
	Aclass aq;
	aq.loadintegers();
	aq.printit();


}