#include<iostream>
using namespace std;
// Solved by Two pointer approach
void reverse( int arr[] ,int size){
        int start=0;
        int end =size-1;
        while(start < end){
                swap(arr[start] ,arr[end]);
                start++;
                end--;
        }
}

int main(){
        int arr[]={2,3,6,89,7};
        int size =5;

        reverse(arr ,size);
        for(int i=0;i<size;i++){
                cout<<arr[i] <<" ";
        }
        cout<<endl;
        return 0;
}