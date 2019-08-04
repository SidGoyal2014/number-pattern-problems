#include <iostream>
using namespace std;
main(){
	int n,i,j,count;
	cin>>n;
	for(i=1;i<=n;i++){
		count=1;
		for(j=i;count<=5;j++){
			cout<<j;
			count++;
		}
		cout<<endl;
	}
	return 0;
}
