#include<iostream>
using namespace std;

int Factorial(int n){
        int Fact=1;
        for(int i=1;i<=n;i++){
                Fact *= i;
        }
        return Fact;
}
int main(){
        cout<<"Factorial is = "  <<Factorial(3) <<endl;
        return 0;
}

//Memory -- There are two types of memory in terms used in c++ Which is known as

//1--Stack --this is Static memory

//Stack--in stack data were stored one by one 
//2--Heap -- this is dynamic memory 
 //Heap -- in this data will store at multiple Locations in the forms of parts