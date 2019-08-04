#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cin>>n;																      //01111
	for(i=1;i<=n;i++){													//10111
		for(j=1;j<=n;j++){												//11011
			if(i==j){													      //11101
				cout<<"0";												    //11110
			}													          		// 'i' is for row
			else{														        // 'j' is for column
				cout<<"1";
			}
		}
		cout<<endl;
	}
	return 0;
}
