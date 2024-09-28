#include<iostream>
#include<vector>
using namespace std;

//problem 1 leetcode = Two sum;
vector<int> pairSum(vector<int> nums ,int target){
        vector<int> ans;
        int n=nums.size();
        int start =0 ,end =n-1;
        while(start < end){
                int pairsum = nums[start] + nums[end];
                if(pairsum > target){
                       end--;
                }else if(pairsum < target){
                        start++;
                }else {
                        ans.push_back(start);
                        ans.push_back(end);
                        return ans;
                }
        }
        return {};

}
int main(){
        vector<int> nums={3,2,4};
        int target=9;
        vector<int> ans=pairSum(nums ,target);

        cout<<ans[0]<<" , "<<ans[1];
        return 0;
}