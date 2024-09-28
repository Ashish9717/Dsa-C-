#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//leetcode problem -- Mijority element by using Optimisez form;
int mijElement(vector<int> nums){
        int n=nums.size();
           int freq =0 ,ans =nums[0];

        sort(nums.begin(), nums.end());
    
       for(int j =0; j < n; j++){
        if(nums[j] == nums[j-1]){
                freq++;
        }else{
                freq=0;
                ans=nums[j];
        }
        if(freq > n/2){
                return ans;
        }
        return ans;
       }
}
int main(){
        vector<int> nums ={6,5,5};

       cout<< mijElement(nums);
        
        return 0;
}