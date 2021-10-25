//---------------------call by refrence----------------
#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a=10,b=15;
	printf("before swapping a=%d",a);
	printf("\nbefore swapping b=%d",b);
	swap(&a ,&b);
	printf("\nafter swapping a=%d",a);
	printf("\nafter swapping b=%d",b);
}
void swap(int *p,int *q)
{
	int c;
	c=*p;
	*p=*q;
	*q=c;
	printf("\nvalue of a in func a=%d",*p);
	printf("\nvalue of a in func b=%d",*q);
}
