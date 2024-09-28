#include<iostream>
using namespace std;

int UniqueNumber( const int arr[] ,int size){
        int unique = 0;
        for(int i=0; i< size ; i++){
                unique ^= arr[i];
        }
        return unique;
}
int main(){
        int arr[]={5,5,3,2,1,2,3};
        const int size =7;

        cout<<UniqueNumber(arr ,size)<<endl;
        return 0;
}
