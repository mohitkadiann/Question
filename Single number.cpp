#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& numbers){
	int ans = 0;
	for(int val : numbers){
		ans^=val; //bitwise xor is used to cancel the repeating elements 
	}
	return ans;
}

int main(){
	vector<int> numbers = {1,4,1,4,2};
	cout<<"The unique element in the array is: "<<singleNumber(numbers)<<endl;
	
	
	
	return 0;
}