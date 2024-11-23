#include<iostream>
using namespace std;


//Kadanes Algorithm is a Dynamic progrming type ALgorithm.
//Problem 53 on leetcode-- Maximum of Subarray 
// By using Kadanes Algorithm .This is most optimised approach
//Time complexity of this program is Big O of n;
int main(){
        int n=5;
        int arr[n]={1,2,23,3,4,5,1};
        int currentSum=0;
        int maxSum=0;
        for(int i=0;i<n;i++){
                currentSum = currentSum+arr[i];
                maxSum =max(currentSum , maxSum);
                if(currentSum < 0){
                     currentSum=0;
                }
        }
        
        cout<<"Max sum ="<<maxSum <<endl;
        return 0;
}