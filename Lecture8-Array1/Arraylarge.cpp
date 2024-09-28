#include<iostream>
#include<climits>
using namespace std;
int main(){
        
        
        int Number [7]={-90, -190,43,5,-2,9,7};
        int size =7;
        
        int small = INT_MAX; //INT_MAX INT_MIN;
        int Big = INT_MIN;
        0;
       
        for(int i=0;i<size;i++){
            if(Number[i] < small){
                small=Number[i];
            }
            if(Number[i] > Big)
            Big =Number[i];
        // small=min(Number[i] ,small); //Short method
        // Big=max(Number[i] ,Big);

            
        }
        cout<<small <<endl;
        cout<<Big<<endl;
        return 0;
}