#include <iostream>
using namespace std;
main(){
	int n,i,j;																		      //11111
	cin>>n;																			        //11111
	for(i=1;i<=n;i++){																  //11011
		for(j=1;j<=n;j++){															  //11111
			if(n%2==0){																      //11111
				if((i==(n/2))&&(j==(n/2))){										// 'i' is for row
					cout<<"0";														      // 'j' is for column
				}
				else{
					cout<<"1";
				}
			}
			else{
				if((i==((n/2)+1))&&(j==((n/2)+1))){
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
