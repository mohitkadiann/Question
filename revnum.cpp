#include<bits/stdc++.h>
using namespace std;

int revNum(int num){
	int rev=0;
	int pow=10;
	int rem;
	while (num>0){
		rev*=pow;
		rem = num%10;
		num/=10;
		rev+=rem;
	}
	return rev;
}


int main(){
	cout<<"Enter the number to be reversed: ";
	int num;
	cin>>num;
	cout<<revNum(num);
	
	
	return 0;
}
