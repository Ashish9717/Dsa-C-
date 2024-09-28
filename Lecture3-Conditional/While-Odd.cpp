#include<iostream>
using namespace std;
int main(){
        int n=10;
        int sum=0;
        int i=1;
        while(i<=n){
                if(i%2 !=0){
                        sum +=i;
                
                }
                i++;
        }
        cout <<"Your Sum is = "<<sum << endl ;
        return 0;
}