#include<iostream>
using namespace std;
class complex
{
	
public:
	double real,img;
	complex()
	{
		real=img=0;
	}
	complex(double a ,double b)
	{
		real=a;
		img=b;
	}
	void show()
	{
		cout<<real<<"    "<<img<<endl;
	}
	friend complex operator+(complex C1 , complex C2);
};
complex operator+(complex C1, complex C2 )
{
	complex temp;
	temp.real=C1.real+ C2.real;
	temp.img=C1.img+C2.img;
	return temp;
}
int main()
{
	complex C1(2.4,5);
	complex C2(1.3,6.8);
	complex C3; 
	 C3=C1+C2;         //Activate operator+()
	C1.show();   
	C2.show(); 
	C3.show(); 
}
