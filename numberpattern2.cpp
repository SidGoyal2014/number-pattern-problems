#include <iostream>
using namespace std;
int main(){										//  11111
	int n,i,j;									//  00000
	cin>>n;										//  11111
	for(i=1;i<=n;i++){								//  00000
		if(i%2==0){								//  11111
			for(j=1;j<=n;j++){						// 'i' is of row
				cout<<"0";						// 'j' is of column
			}
		}
		else{
			for(j=1;j<=n;j++){
				cout<<"1";
			}
		}
		cout<<endl;
	}
	return 0;
}
