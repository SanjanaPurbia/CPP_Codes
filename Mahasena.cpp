#include<iostream>
using namespace std;
int main(){
	int n,a[n],count=0,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]%2 == 0){
			count++;
		}
		else{
			sum++;
		}
	}
	if(count>sum){
		cout<<"READY FOR BATTLE"<<endl;
	}
	else{
		cout<<"NOT READY"<<endl;
	}
	
}
