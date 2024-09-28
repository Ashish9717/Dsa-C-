#include<iostream>
using namespace std;

int main(){
         int n;
         cout <<"Enter your marks:"<< endl ;
         cin >> n;

         if (n>=90){
                cout <<"You got Grade A"<< endl;
         }else if(n>=80 && n<90){
                cout <<"You got Grade B" << endl;
         }else{
                cout <<"You got Grade C" << endl;
         }
         return 0;
}