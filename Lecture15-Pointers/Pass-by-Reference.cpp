#include<iostream>
using namespace std;

void ChangeA(int* ptr){
      
       *ptr =20; //The name of Array in c++ are like an Pointer that point Index of 0 in array.
       // Array pointer is an special category of pointer That called Constant pointer;
}

int main(){
        int a=10;
        ChangeA(&a);
        cout<<a <<endl;
        return 0;

}

//Poinetr Arithmetic -- Increament(++) , Decrement(--).

// Add / Substract 

//Subtract ptr

//Compare( < ,<= , > ,>= ,== ,!= )