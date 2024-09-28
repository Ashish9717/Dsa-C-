#include<iostream>
#include<vector>
using namespace std;

int ReverseVec(vector<int>& nums){
        int start =0,end=nums.size() -1;
                while(start < end){
                    swap(nums[start] ,nums[end]);
                    start++;
                    end--;
                }
        return 0;
}
int main(){
        vector<int> nums ={2,3,41,41,44,12,41,4,5,6};

        ReverseVec(nums);
        for(int val :nums){
                cout<<val<<endl;
        }
        return 0;
}