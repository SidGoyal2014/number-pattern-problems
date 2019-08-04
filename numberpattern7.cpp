#include <iostream>
using namespace std;
main(){
	int i,n,j;
	cin>>n;																      //10101
	for(i=1;i<=n;i++){													//01010
		if(i%2==0){														    //10101
			for(j=1;j<=n;j++){											//01010
				if(j%2==0){												    //10101
					cout<<"1";											    // 'i' is for row
				}														          // 'j' is for column
				else{
					cout<<"0";
				}
			}
		}
		else{
			for(j=1;j<=n;j++){
				if(j%2==0){
					cout<<"0";
				}
				else{
					cout<<"1";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
