#include<iostream>
#include<vector>

using namespace std;

void BubbleSort(vector<int>& nums ,int n){
        for(int i = 0 ; i < n -1 ; i++){
                bool  isSwap = false;
                for(int j = 0 ; j<n - i - 1 ; j++){
                        if(nums[j] > nums[j+1]){
                                swap(nums[j] , nums[j+1]);
                                isSwap = true;
                        }
                }
                if(!isSwap){
                        return ;
                }
        }
}
void PrintArray(vector<int> nums , int n){
        for(int i = 0 ; i < n  ; i++){
                cout<<nums[i] << " " ;
        }
        cout << endl ;
}
int main(){
        vector<int> nums = {4,1,5,2,3};
        int  n = 5;
        BubbleSort(nums ,n);
        PrintArray(nums ,n);
        // cout<<BubbleSort(nums) <<endl;
        return 0;
}