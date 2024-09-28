#include<iostream>
#include<vector>
using namespace std;

int LenearSearch(vector<int>& nums){
        int target =8;
        // for(int val=0; val<nums.size();val++){
        //         if(nums[val] == target){
        //                 cout<<val<<endl;
        //         }
        // }
        for( int val :nums){
                if(val == target){
                        cout<<val <<endl;
                }
        }
                return 0 ;

        
}
int main(){
        vector<int> nums={1,2,31,8,9,12,4};

        cout<<LenearSearch(nums)<<endl;
        return 0;
}