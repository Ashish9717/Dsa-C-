#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int Singlenumber(vector<int> nums){
        int n = nums.size();
        sort(nums.begin() ,nums.end());
        for(int i =1; i<n ; i++){
                if(nums[i] != nums[i-1]  &&  nums[i] != nums[i+1]){
                        return nums[i];
                }
        }
}
int main(){
        vector<int> nums ={1,2,1,3,2,4,1,2,3,3};

        cout<<Singlenumber(nums)<<endl;
        return 0;
}