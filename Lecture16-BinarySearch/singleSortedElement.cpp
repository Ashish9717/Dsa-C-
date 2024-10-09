#include<iostream>
#include<vector>
using namespace std;

int Single(vector<int>& nums ){
        int n = nums.size();
        if(n== 1) return nums[0];
        
        int left =0 , right = n-1;

       
        while(left <= right){
                int mid = left + (right - left) / 2;

                if(mid == 0 && nums[0] != nums[1]) return nums[mid];
                        
                if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid] ;
                if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
                        return nums[mid];
                }
                if(mid % 2 ==0){
                        if(nums[mid] == nums[mid-1]){
                                right =mid -1 ;
                        }else{
                                left = mid + 1;
                        }
                }else{
                        if(nums[mid] == nums[mid - 1]){
                                left =mid +1;
                        }else{
                                right = mid -1;
                        }
                }
            
        }
        return {};

}
int main (){
        vector<int> nums = {3,3,7,7,10,11,11};

        cout<<Single(nums) <<endl;
        return 0;
}