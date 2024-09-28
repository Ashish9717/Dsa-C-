#include<iostream>
using namespace std;
 
 int Fib(int n){
        int a=0,b=1;
        cout<<"Fibonacci Series:";
        if(n >=1 )
        cout<< a <<" ";

        if(n >= 2)
        cout<< b <<" ";


        for(int i=3;i<=n; i++){
                int c= a + b;
                cout<< c <<" ";

                a=b;
                b=c;
        }
        cout<<endl;

 }
 int main(){
        Fib(18);
        return 0;
 }