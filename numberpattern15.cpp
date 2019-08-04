#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cout<<"enter the number of lines: ";
	cin>>n;															          //54321
	cout<<"the  pattern is:\n";										//5432
	for(i=n;i>=1;i--){												    //543
		for(j=i;j>=1;j--){											    //54
			cout<<j;												          //5
		}															              // number pattern problem
		cout<<endl;
	}
	return 0;
}
