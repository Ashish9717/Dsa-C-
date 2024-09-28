#include<iostream>
#include<vector>
using namespace std;

//problem 169 Leetcode == Mijority element By using brute froce approach.
int  mijorityNum(vector<int> nums) {
       
        int n=nums.size();
        for(int val :nums){
                 int freq =0;
                for(int el: nums){
                        if(el ==val){
                                freq++;
                        }
                }
                if(freq > n/2){
                        return val;
                }
        }
        return -1;
}
int main(){
        vector<int> nums={1,2,1,3,1,4,1,1};

        cout<<mijorityNum(nums)<< endl;
        return 0;
        

}