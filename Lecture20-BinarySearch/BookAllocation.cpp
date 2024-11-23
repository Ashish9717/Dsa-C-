// Leetcode problem -- BookAllocation Asked by google.

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>& nums , int n , int m , int maxAllowed){
          
          int Students = 1, pages =0;
          for(int i =0 ;i<n ;i++){
                if(nums[i] > maxAllowed){
                        return false ;
                }
                if(pages + nums[i] <= maxAllowed){
                        pages = pages + nums[i];
                }else{
                        Students++;
                        pages = nums[i];
                }
          }
         return Students > m ? false : true ;
}
 

 int BookAllocation(vector<int>& nums , int n , int m){
        if(m > n) return -1 ;
        int sum = 0;
        int size =nums.size();
        for(int i =0 ; i<size ;i++){
              sum = sum + nums[i];
        }
         int ans = -1;
        int left = 0 , right = sum;  // Range of posible answers
          
          while(left <= right){
                int mid = left + ( right - left) / 2;

                if(isValid(nums , n, m ,mid)){
                        ans = mid ;
                        right = mid - 1;

                }else{
                        left = mid + 1;

                }
          }
          return ans;
 }
 int main(){
        vector<int> nums ={2,1,3,4};

        int n=4 ,m=2;
        cout<<BookAllocation(nums , n , m) << endl;
        return 0;
 }