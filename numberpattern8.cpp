#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cin>>n;																		      	//11011
	for(i=1;i<=n;i++){																//11011
		if(i==((n/2)+1)){															  //00000
			for(j=1;j<=n;j++){														//11011
				cout<<"0";														    	//11011
			}																		          //'i' is for row
		}																			          //'j' id for column
		else{
			for(j=1;j<=n;j++){
				if(j==((n/2)+1)){
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
