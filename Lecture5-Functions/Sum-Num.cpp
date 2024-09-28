#include<iostream>
using namespace std;

int SumDig(int x){
       int Digit=0;
       while(x>0){
        int Rem=x%10;
        x=x/10;
         Digit += Rem;
        
       }
       return Digit;
}
int main(){
        cout<<"Sum is = "<<SumDig(14256)<<endl;
        return 0;
}