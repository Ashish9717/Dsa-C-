#include<iostream>
#include<climits>
using namespace std;

int FindMax(int arr[] ,int size){  
          int  max =arr[0];
          for(int i=0;i<size ;i++){
                if(arr[i] > max ){
                        max=arr[i];
                }
        }
          return max;
}
int findMin(int arr[], int size){
      int min=arr[0];
      for(int i=0;i<size ;i++){
        if(arr[i] < min){
                min =arr[i];
        }
      }
      return min;
}
int main(){
        int arr[]={3,4,5,1,2};
        int size =5;

        cout<<"Maximum = "<<FindMax(arr ,size)<<endl;
        cout<< "Minimum = "<<findMin(arr ,size)<<endl;
        return 0;
}