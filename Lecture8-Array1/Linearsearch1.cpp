#include<iostream>
using namespace std;

int linear( int arr[] ,int size ,int target){
        for(int i =0; i <size ;i++){
                if( arr[i ] ==target){
                        return i;
                }
        }
        return -1; 
} 
int main(){
        int arr[] ={1,2,77,8,4,3,44,63,5 ,2 ,626};
        int size= 10;
        int target = 5;
        cout <<linear(arr ,size ,target) <<endl;
        return 0;
}
