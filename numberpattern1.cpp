/*
Pattern:
n: 5
11111
11111
11111
11111
11111
*/

//////// CODE /////////

#include <iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}
