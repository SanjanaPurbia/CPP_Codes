#include<iostream>
using namespace std;

class sample
{
public:
	int a;
	void getdata(int x)
	{
		a=x;
	}
	void putdata()
	{
		cout<<"a = "<<a<<endl;
	}
	friend void  max(sample);
};
void max (sample m)
{
	cout<<m.a<<endl;	
}
int main()
{
	sample S;
	S.getdata(100);
	S.putdata();
	max(S);
	
}
