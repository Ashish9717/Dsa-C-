#include<iostream>
using namespace std;

int SumofN(int n){  //Function are used to decrease the chance of redundency
        int sum=0;
        for(int i=1;i<=n;i++){
             sum=sum+i;

        }
        return sum;
       
}
int main(){
        cout<<"Sum is = "<<SumofN(10) <<endl;
        return 0;
}