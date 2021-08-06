#include<iostream>
using namespace std;
class person
{
	char name[20];
	int age;
public:	
	void getdata()
	{
		cin>>name>>age;
	}
	void putdata()
	{
		cout<<name<<age;
		
	}
};
int main()
{
	person P,P1;
	P.getdata();
	P1.getdata();
	P.putdata();
	P1.putdata();
}
