#include<iostream>

using namespace std;
int main(){
        int n =9;
        int sum =0;
        for(int i=1; i<=n; i++){
                if( i%2 != 0){
                        // cout <<i <<" " ;

                        sum=sum+i;
                        
                 }
              
         }
          cout <<"Odd sum is = "<<sum;
        cout << endl;
        return 0;
}