#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> num = {3,-4,-7,8,2,4,-8};
	int currSum = 0, maxSum = INT_MIN;
	
	for(int val : num){
		currSum+=val;
		maxSum = max(currSum,maxSum);
		if(currSum<0){// the if condition is used after the max Sum so that atleast once the max sum is calculated in the case of the sum to be negative
			currSum=0;
		}
	}	
	cout<<"The maximum sum of the subarray is: "<<maxSum;
	return 0;
}