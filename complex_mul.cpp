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
		cout<<"The multiplication is="<<real<<"     "<<img<<endl;
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
complex complex ::operator*(complex C)
{

	complex real1,real2;
	real1=real;
	real2=C.real;
	real=(real*C.real;-(img*C.img);
	img=(real*C.img)+(img*real2);
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
	complex C4;
	C4=C1*C2;
	C1.show(2.4,5);
	C2.show(1.3,6.8);
	C4.show();
}
