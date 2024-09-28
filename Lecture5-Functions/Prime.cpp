#include<iostream>
using namespace std;

bool NumPrime(bool n){
           bool isPrime = true;
        for(int i=2;i<=n-1;i++){
                if(n%i ==0){
                   isPrime =false;
                   break;
                }
        }
        if(isPrime==true){
                cout<<"number is prime \n";
        }else{
                cout<<"number is non prime\n";
        }
        return NumPrime;
       
}
int main(){
        cout<<NumPrime(7)<<endl;
        return 0;
}