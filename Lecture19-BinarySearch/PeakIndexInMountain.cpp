#include<iostream>
#include<vector>
using namespace std;

// Problem 852 on Leatcode -- Peak Index In Mountain Array.

int PeakElement(vector<int> Arr){
        int n = Arr.size();
        int left = 1 , right = n-2;

        while(left <= right){
                int mid = left + (right- left) / 2;
                if(Arr[mid] > Arr[mid-1] && Arr[mid] > Arr[mid+1]){
                        return mid;
                }
                if(Arr[mid] < Arr[mid+1]){
                        left =mid+1;
                }else{
                        right =mid - 1;
                }
        }
        return 0 ;

}
int  main(){
        vector<int> Arr ={3,5,3,2,0};
        cout<<PeakElement(Arr)<< endl;
        return 0;
}