#include<iostream>
using namespace std;

int BinaryNum(int n){
       int  ans =0;
       int power = 1;
        while(n > 0){
              int  rem = n%2;
                n=n/2;
                 ans +=(rem*power);
                 power =power*10;
                 
        }
        return ans;
}
int main(){
        int n =7;
        for(int i=1;i<=n; i++){
          cout<<BinaryNum(i) << " "<<endl;
        }
       
        return 0;

}