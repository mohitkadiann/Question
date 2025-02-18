#include<bits/stdc++.h>
using namespace std;


void revArray(int arr[],int size){
	int start = 0, end = size - 1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main(){
	int arr[]={7,4,8,5,2,9};
	int size = 6;
	revArray(arr,size);
	for(int i = 0 ;i<size;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
	
	
	
	return 0;
	
}
