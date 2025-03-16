#include<iostream>
using namespace std;
int binExponent(double x, int n){
	
	//we are adding some corner cases for better understanding
	if(n==0) return 1.0;
	if(x==0) return 0.0;
	if(x==1) return 1.0;
	if(x==-1 && n%2==0) return 1.0;
	if(x==-1 && n%2!=0) return -1.0;
	
	long binForm = n;
	double ans = 1;
	if(n<0){
		x=1/x;
		binForm = -binForm;
	}
	while(binForm>0){
		if(binForm % 2 == 1){
			ans*=x;
		}
		x*=x;
		binForm/=2;
	}
	return ans;
}
int main(){
	cout<<"Enter the number and the power with space: ";
	double x;
	int n;
	cin>>x>>n;
	cout<<binExponent(x,n);
}