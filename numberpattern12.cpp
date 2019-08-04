#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cout<<"enter the number of lines: ";
	cin>>n;
	cout<<"the pattern is:\n";
	for(i=1;i<=n;i++){									//11111
		for(j=i;j<=n;j++){								//2222
			cout<<i;									      //333
		}												          //44
		cout<<endl;										    //5
	}													          // number pattern
	return 0;
}
