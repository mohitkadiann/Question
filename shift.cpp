#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	int n;
	cout<<"Enter the number:: ";
	cin>>n;
	int i;
	int pow=0;
	for( i=1;i<=n/2;i++){
		if((1<<i)==n ){
			pow=i;
			break;
		}
		
	}
	if(pow==0){
		cout<<"The number is not a power of 2;";
	}else{
		cout<<"The number is the "<<pow<<"th power of 2";
	}
	
	return 0;
}
