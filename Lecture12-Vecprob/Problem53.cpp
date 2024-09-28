#include<iostream>
#include<vector>
using namespace std;

//Problem 53 At leetcode -- To calculate the power of Given input with given Power

// By using Binary Exponentiation.

int myPow( double x ,int n){
        if( n == 0) return 1.0;
        if( x ==0 ) return 0.0;
        if( x==1) return 1.0;
        double ans =1.00 ;
        long binform =n;
        if(binform < 0){
                x =1/x;
                binform = -binform;
        }
        
        while( binform > 0){
                if( binform %2 == 1){
                        ans =ans *x;
                }
                x= x*x;
                binform /=2;

        }
        return ans;
}
int main(){
        double x= 2.0000;
        int n=10;
        cout<<myPow( x ,n) <<endl;
        return 0;
}