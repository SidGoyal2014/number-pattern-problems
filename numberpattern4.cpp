#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cin>>n;																		      //11111
	for(i=1;i<=n;i++){															//10001
		for(j=1;j<=n;j++){														//10001
			if((i==1)||(i==n)){													//10001
				cout<<"1";														    //11111
			}																	          // 'i' is for row
			else{																        // 'j' is for column
				if((j==1)||(j==n)){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
