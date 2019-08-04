#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cout<<"enter the number of lines: ";
	cin>>n;
	cout<<"The pattern is:\n";						//55555
	for(i=n;i>=1;i--){							    	//4444
		for(j=1;j<=i;j++){							    //333
			cout<<i;								          //22
		}											              //1
		cout<<endl;									        // number pattern
	}
	return 0;
}
