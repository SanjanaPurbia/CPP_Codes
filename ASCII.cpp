#include<iostream>
using namespace std;
int main(){
	char var;
	cin>>var;
	//cout<<"ascii is="<<int(var);
	if(var>65 && var<91){
		cout<<"Upper case="<<int(var);
	}
	else if(var>97 && var<122){
		cout<<"Lower case="<<int(var);
	}
	else if(var<48 && var<=58){
		cout<<"No is:"<<int(var);
	}
	else{
		cout<<"Exeption:"<<var;
	}
}
