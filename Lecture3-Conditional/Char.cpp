#include<iostream>
using namespace std;
int main(){
        char ch;
        cout <<"Enter your character:"<< endl;
        cin >> ch;
        if(ch >='a' && ch<='z'){
                cout <<"Given character is in lowercase"<< endl;
        }else{
                cout <<"Given character is in Upper case"<< endl;
        }
        return 0;

}