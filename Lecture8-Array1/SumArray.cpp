#include<iostream>
using namespace std;
 int SumOfArray(int arr[] , int size){
        int sum =0 ,start =0;
        for(int i=0;i<size;i++){
                sum=sum+arr[start];
                start++;
        }
        return sum;
 }
 int main(){
        int arr[]={10,20,30,40,50 ,10};
        int size =6;

        cout << SumOfArray(arr ,size )<<endl;
        return 0;
 }