#include<iostream>
using namespace std;
class complex
{
	double real,img;
public:
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
	complex operator+(complex);
};
complex complex :: operator+(complex C )
{
	complex temp;
	temp.real=real+C.real;
	temp.img=img+C.img; 
	return temp;
}
int main()
{
	complex C1(2.4,5);
	complex C2(1.3,6.8);
	complex C3;
	C3=C1+C2;    //Activate operator+()
	C1.show();
	C2.show();
	C3.show(); 
}
