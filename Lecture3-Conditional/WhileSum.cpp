#include<iostream>

using namespace std;
int main(){
        int n=10;
        int sum=0;
        int i=1;

        while( i <= n){
               sum=sum+i;
               i++; 
        }
        cout <<"sum = "<<sum;  // Break keyword is used to terminate a runnig loop immeditly . it is also know as special reserved word
        return 0;

}