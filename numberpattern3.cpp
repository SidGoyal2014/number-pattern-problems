#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cin>>n;																      //10101
	for(i=1;i<=n;i++){													//10101			
		for(j=1;j<=n;j++){												//10101
			if(j%2==0){													    //10101
				cout<<"1";												    //10101
			}															          // 'i' is for row
			else{														        // 'j' is for column
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}
