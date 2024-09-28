#include<iostream>
using namespace std;
int changeArray(int arr[] ,int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}

int main(){
        int arr[3]={1,2,3};
        changeArray(arr  ,3);
        cout<<"in main\n"<<endl;
         for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
     return 0;
}
       


        
        
        
        
        // PAss by referance are used for non premitive data types