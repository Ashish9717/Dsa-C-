#include<iostream>
#include<climits>
#include<vector>
using namespace std;

//Problem -- Maximum Subarray Sum
//By using brute force Approce


//Subarray is the continuous part of Array.
int main(){
        int n=7;
        int arr[n]={1,2,23,3,4,5,1};
        int maxSum=0;
        for(int st=0; st<n ; st++ ){
                int currentSum=0;
                for(int end=st;end<n;end++){
                      currentSum += arr[end];
                      maxSum=max(currentSum ,maxSum);
                }

        }
        cout<<"Maximum of SubArray = "<<maxSum <<endl;
        return 0;
}