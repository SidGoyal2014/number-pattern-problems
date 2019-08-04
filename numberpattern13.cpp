#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cout<<"enter the number of lines: ";
	cin>>n;
	cout<<"The pattern is:\n";
	for(i=n;i>=1;i--){
		for(j=i;j<=n;j++){
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
