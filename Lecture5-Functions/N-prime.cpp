#include<iostream>
using namespace std;

bool isPrime(int num){
        if(num <= 1 )
        return false;
        for(int i=2;i*i<=num;i++){
                if(num%i ==0)
                return false;
        }
        return true;

}
void PrintPrime(int n){
        
        for(int i=2;i<=n;i++){
                if(isPrime(i)){
                        cout<<i <<" ";
                }
        }
        cout<<endl;

}
int main(){
        PrintPrime(7);
        return 0;
}