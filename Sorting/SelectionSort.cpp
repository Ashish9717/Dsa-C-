#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int>& nums , int n){
        for(int i=0 ;i<n-1; i++){
                int SmallestIndex = i;
                for(int j = i+1 ;j<n ;j++){
                        if(nums[j] < nums[SmallestIndex]){
                                SmallestIndex = j;
                        }
                }
                swap(nums[i] , nums[SmallestIndex]);

        }
}
void PrintArray(vector<int> nums , int n){
      for(int i=0 ;i<n; i++) {
        cout<<nums[i] <<" " ;
      } 
      cout<<endl;
}
int main(){
        vector<int> nums ={4,1,5,2,3};
        int n =5;
        SelectionSort(nums , n);
        PrintArray(nums , n);
        return 0;
}