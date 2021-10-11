//funct making result of maths sub
#include<iostream>
using namespace std;
class result
{
	int marks;
public:
	void putdata()
	{
		
		cout<<"enter marks=";
		cin>>marks;
	}
	void getdata()
	{
		cout<<"marks obtain"<<marks<<endl;
	}
};
int main()
{
	result R;
	R.putdata();
	R.getdata();
}
