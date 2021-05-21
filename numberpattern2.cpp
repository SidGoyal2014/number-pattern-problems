/*
n: 5
11111
00000
11111
00000
11111
*/

////////// CODE ////////////

#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0){
			for(j=1;j<=n;j++){
				cout<<"0";
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
