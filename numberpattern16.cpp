#include <iostream>
using namespace std;
main(){
	int i,j,n;
	cin>>n;
	for(i=n;i>=1;i--){
		for(j=n;j>i;j--){
			cout<<j;
			cout<<" ";													        //5 5 5 5 5 5 5 5 5
		}												              				//5 4 4 4 4 4 4 4 5
		for(j=1;j<=((2*i)-1);j++){										//5 4 3 3 3 3 3 4 5
			cout<<i;												        	  //5 4 3 2 2 2 3 4 5
			cout<<" ";													        //5 4 3 2 1 2 3 4 5
		}											              					//5 4 3 2 2 2 3 4 5
		for(j=(i+1);j<=n;j++){								  			//5 4 3 3 3 3 3 4 5
			cout<<j;										          			//5 4 4 4 4 4 4 4 5
			cout<<" ";													        //5 5 5 5 5 5 5 5 5
		}																              //number pattern problem
		cout<<endl;
	}
	for(i=2;i<=n;i++){
		for(j=n;j>=(i+1);j--){
			cout<<j;
			cout<<" ";
		}
		for(j=1;j<=((2*i)-1);j++){
			cout<<i;
			cout<<" ";
		}
		for(j=(i+1);j<=n;j++){
			cout<<j;
			cout<<" ";
		}
		cout<<endl;
	}
}
