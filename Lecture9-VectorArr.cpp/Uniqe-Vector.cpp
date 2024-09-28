#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//Problem Number 136 On leetCode.
// This problem cen be solved by Bitwise opertor (Xor).
//When we do XOR of Two same numbers then it will give 0 ,When we do XOR of 0 and 1 then is Gives 1;
int UniqueNumber(vector<int>& nums){
        int Single =0 ;
           for(int val : nums){
                 Single = Single ^ val;
           }

           return Single;
}

int main(){
        vector<int> nums ={2,2,1};

        cout<<UniqueNumber(nums)<<endl;
        return 0;
}