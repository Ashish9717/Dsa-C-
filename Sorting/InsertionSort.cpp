#include<iostream>
#include<vector>
using namespace std ;

void InsertionSort(vector<int>& nums ){ // Timecomplexity O(n^2);

        int  n= nums.size() ;
        for(int i = 1 ; i<n ;i++){
                int current = nums[i] , privious = i-1;
                while(privious >= 0 && nums[privious] > current){
                        nums[privious + 1] = nums[privious];
                        privious--;
                }
                nums[privious+1] = current ;
        } 

}
void PrintArray(vector<int>& nums){
        for(int i =0;i<nums.size() ;i++){
                cout<<nums[i] << " " ;
        }
        cout<<endl ;
}
int main(){
        vector<int> nums = {4,1,5,2,3};
        InsertionSort(nums);
        PrintArray(nums);
        return 0;
}