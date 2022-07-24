#include<iostream>
using namespace std;
int main(){
	int num,evensum=0,oddsum=0;
	cout<<"Enter the no till you need sum ";
	cin>>num;
	for(int i=1;i<=num;i++){
		if((i%2)==0){
			evensum+=i;
		}
		else{
			oddsum+=i;
		}
	}
	cout<<evensum<<" "<<oddsum<<" "<<evensum+oddsum;
}
