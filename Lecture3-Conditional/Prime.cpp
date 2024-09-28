#include<iostream>
 using namespace std;

 int main(){
        int n=15;
        bool isPrime = true;

        for(int i=2 ;i<=n-1;i++){
                if(n%i ==0){
                       isPrime = false; 
                      break;

                } 
        }
                if(isPrime ==true){
                       cout <<"No is Prime";
                }else{
                        cout <<"no is not prime";
                }
                return 0;
                
 }
 