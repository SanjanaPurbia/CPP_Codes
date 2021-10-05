#include<iostream>
using namespace std;

class sample
{
	int a,b;
public:
	sample()
	{
		a=b=20;
	}
	sample(int x,int y)
	{
		a=x;
		b=y;
	}
	sample(sample &id)
	{
		a=id.a;
		b=id.b;
	}
	void show()
	{
		cout<<a<<"   "<<b<<endl; 
	}
};
int main()
{
	sample S(10,4);
	sample obj;
	sample obj1=S;
	S.show();
	obj.show();
	obj1.show();
	
	
}
