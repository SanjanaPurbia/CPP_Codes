#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,d[n];
	cin>>t;
	for(int i=1;i<=t;i++){
	    cin>>n;
	    int count=0;
	    for(int j=1;j<=n;j++){
	        cin>>d[j];

	        if(d[j]>=1000){
	            count++;
	        }
	        cout<<d[j]<<endl;
	    }
	    cout<<count<<endl;
	}
	//cout<<count<<endl;
	return 0;
}

