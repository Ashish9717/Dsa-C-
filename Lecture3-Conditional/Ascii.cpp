#include<iostream>
using namespace std;

int main(){
         char c;
         cout <<"Enter Ascii value"<< endl;
         cin >> c;
         if(c >= 65  &&  c <= 90){
                cout <<"Uppercase"<<endl;

         }else{
                cout<<"Lowercase"<<endl;
         }
         return 0;
}

//ternary statement