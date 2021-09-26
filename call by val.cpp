//swapping
#include<iostream>
using namespace std;
void swap(int ,int);
int main()
{
	int a=5,b=10;
	cout<<"a before swapping a="<<a<<endl;
	cout<<"b before swapping b="<<b<<endl;
	swap(a,b);
	cout<<"a after swapping a="<<a<<endl;
	cout<<"b after swapping b="<<b<<endl;
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"value in func a="<<a<<endl;
	cout<<"value in funct b="<<b<<endl;
}
