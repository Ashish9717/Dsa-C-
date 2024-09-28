#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//leetcode problem --MIjority elment by using Moores algorithm.
int mooresNum(vector<int> nums){
        int n= nums.size();
        int freq=0 ,ans =0;
        for(int i=0;i<n;i++){
                if(freq ==0){
                        ans=nums[i];
                }
                if(ans==nums[i]){
                        freq++;
                }else{
                        freq--;
                }

        }
        return ans;
}
int main(){
        vector<int> nums={1,2,3,1,1,3,3,3,3};

        cout<<mooresNum(nums)<<endl;
        return 0;
}