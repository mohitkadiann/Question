#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
        //find the pivot
        int  n = nums.size();
        int piv = -1;
        for(int i = n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                piv = i;
                break;
            }
        }
        if(piv==-1){
            reverse(nums.begin(), nums.end());
            return;
        }else{
            for(int i = n-1;i>piv;i--){
                if(nums[i]>nums[piv]){
                    swap(nums[i],nums[piv]);
                    break;
                }
            }
        }
        int i = piv+1,j=n-1;
        while(i<=j){
            swap(nums[i++],nums[j--]);// here we can do reverse(nums.begin() + pivot+1 , nums.end())
        }
    }
void printArr(vector<int> &arr,int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	
	vector<int> arr= {1,2,3};
	int n  = 3;
	
	nextPermutation(arr);
	printArr(arr,n);
	
	return 0;
}