#include<iostream>
#include<vector>
using namespace std;

int Index(vector<int> nums , int target){
       int n =nums.size();
       int left =0 , right =n-1;
        
        if(n == 0) return -1,-1;

       while(left <= right){
        int mid = left + (right -left) / 2;

        if(nums[mid] == target){
                if(nums[mid] == nums[mid-1])  return mid-1  , mid;
        }else{
                return mid , mid + 1;
        }

       }
       return -1 ,-1;
}
int main(){
        vector<int> nums= {5,7,7,8,8,10};
        int target =8;

        cout<<Index(nums , target)<<endl;
        return 0;
}