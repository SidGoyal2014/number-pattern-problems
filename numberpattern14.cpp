#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cout<<"the number of lines is: ";
	cin>>n;
	cout<<"the pattern is:\n";							//12345
	for(i=n;i>=1;i--){									    //1234
		for(j=1;j<=i;j++){						    		//123
			cout<<j;									          //12
		}												              //1
		cout<<endl;										        // number pattern
	}
	return 0;
}
