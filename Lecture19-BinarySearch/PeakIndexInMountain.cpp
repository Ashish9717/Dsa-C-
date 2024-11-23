#include<iostream>
#include<vector>
using namespace std;

// Problem 852 on Leatcode -- Peak Index In Mountain Array.

int PeakElement(vector<int> Arr){
        int n = Arr.size();
        int left = 0 , right = n-1;
        if(n == 1){
                return 0;
        }

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
        return left ;

}
int  main(){
        vector<int> Arr ={1,2};
        cout<<PeakElement(Arr)<< endl;
        return 0;
}