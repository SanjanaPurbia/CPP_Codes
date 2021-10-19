#include<iostream>
using namespace std;
int main()
{
	int A[5],i,j,c;
	cout<<"Enter the array:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>A[i];
	}
	cout<<"Given Array is :"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<A[i]<<endl;
	}
	//............................../................................./...........................
	//sorting of array
	cout<<"Sorting of array :"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(A[i]>A[j])
			{
				c=A[i];
				A[i]=A[j];
				A[j]=c;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<A[i]<<endl;
	}
}

