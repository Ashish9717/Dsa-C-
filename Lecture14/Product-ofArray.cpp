#include<iostream>
#include<vector>
using namespace std;


//Problem 238 on leetcode -- Product of Array expect self using burte force approach;
int ProductArray(vector<int> nums ){
        int n=nums.size();
        vector<int> ans (n ,1);
        for(int i=0;i<nums.size();i++){
             for(int j=0;j<nums.size();j++){
                if( i!= j){
               ans[i] =ans[i]*nums[j];
                }
             }  
             return ans[i];  
        }
        
}
int main(){
        vector<int> nums ={2,1,3,4,14};

        cout<<ProductArray(nums) << endl;
        return 0;
}