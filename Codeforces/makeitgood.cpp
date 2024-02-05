#include<bits/stdc++.h>
using namespace std;
class Renderer{
public:
	int aa;
	int bb;
	Renderer(int a,int b){
		aa = a;
		bb = b;
	}
};

class listboxItem{
public:
	Renderer *gRender;
	void assignRender(Renderer* render){
		gRender = render;
	}
};

class listbox{
public:
	Renderer *grender;
	vector<listboxItem*> items;
	void assignRender(Renderer*  render){
		grender = render;
		for(auto *x:items){
			x->assignRender(render);
		}
	}
};

class Game{
public:	
	listboxItem *item;
	listbox* box;
	vector<listbox*> listboxes;

	Game(){
		item = new listboxItem();
		box = new listbox();
		
		box->items.push_back(item);
		listboxes.push_back(box);
		
		cout<<"Box :"<<box<<endl;
		cout<<"Box :"<<listboxes[0]<<endl;
	}
	void assignRender(Renderer* render){
		cout<<"Ren: "<<render<<endl;
		for(int i=0;i<listboxes.size();i++){
			listboxes[i]->assignRender(render);
		}
		cout<<"Ren: "<<listboxes[0]->grender<<endl;
	}
};

int main(){
	Game g;
	Renderer *ren = new Renderer(1,2);
	cout<<"Box: "<<g.listboxes[0]<<endl;
	cout<<"Ren: "<<ren<<endl;
	g.assignRender(ren);
	cout<<"Ren: "<<g.listboxes[0]->grender<<endl;

}