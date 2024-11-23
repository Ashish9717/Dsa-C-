#include<iostream>
#include<vector>

using namespace std ;

int MissingElement(vector<int>& nums , int n){
        //Where n is Size of nums

        int sum = n * (n+1) / 2;
        int sum2 =0 , val =0;

        for(int i =0 ; i<nums.size() ;i++){
                 sum2 = sum2 + nums[i];

         val  = sum - sum2;
            
        }
        return val;
}
int main(){
        vector<int> nums = {1,2,3,5,6,7};
        int n =7 ;
        cout<<MissingElement(nums , n)<<endl;
        return 0;
}