#include<iostream>
#include<vector>
using namespace std;
//Problem 1 --Two sum 
vector<int> twoSum(vector<int> nums ,int target){
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
                for(int j=i;j<n-1;j++){
                        if(nums[i]+ nums[j] ==target){
                           ans.push_back(i);
                           ans.push_back(j);
                           return ans;   
                        }
                }
        }
        return {};
}
int main(){
        vector<int> nums={3,2,4};
        int target =9;
        vector<int> ans =twoSum(nums ,target);
        cout<<ans[0] <<" , " <<ans[1]<<endl;
        cout<<endl;
        return 0;
}