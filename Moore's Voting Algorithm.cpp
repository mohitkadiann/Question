//using the moore's voting algorithm for best time complexity
#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
        int freq=0,ans=0;
        for(int i = 0;i<nums.size();i++){
            if(freq==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }else{
                freq--;
            } 
        }
        
		//additional step if the majority element is not compulsarly present in the arrar;
		int count = 0;
		for(int val:nums){
			if (val==ans){
				count++;
			}
		}
		if(count>=(nums.size())/2){
			return ans;
		}else{
			return -1;
		}
	
            
}

int main(){
	vector<int> nums = {1,1,1,2,3,2};
	cout<<"The majority element in the given array is: "<<majorityElement(nums);
	
	
	return 0;	
}
