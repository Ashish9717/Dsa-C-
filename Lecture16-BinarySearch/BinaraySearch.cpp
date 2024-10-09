#include<iostream>
#include<vector>
using namespace std;


//For Applying binary search in any array you need to sort the array in assending order.
// It follows a monotonic or monotonas function.
// monotonous function are function that they are not increasing or decreassing.

// This is using Brute force approach;

int Search(vector<int> nums ,int target){
        int n=nums.size();
        int st =nums[0] , end =nums[n-1];

        int mid = (st + end) /2 ;
        
        if(mid > target){
                for(int i=mid ;i > 0;i--){
                    if(nums[i] == target){
                        return i;
                    }
                }
        }else if(mid < target){
                for(int i=mid ;i<n;i++){
                    if(nums[i] == target){
                        return i;
                    }
                }
        }else {
                return mid;
        }
        return -1;

}
int main(){
        vector<int> nums={-1 ,0,2,3,4,5,9,12};
        int target =9;
        cout<<Search(nums ,target)<<endl;
        return 0;
}