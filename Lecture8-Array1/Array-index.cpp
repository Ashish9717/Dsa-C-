#include<iostream>
#include<climits>
using namespace std;
int main(){
                  
        int Nums[6]={20,19,-9,58,0,-90 };
               int size =6;
               
          int small=INT_MAX;

        int Big =INT_MIN;
      
        int SmallIndex=0;
        int LargeIndex=0;
        
        for(int i=0;i<size;i++){
                if(Nums[i] < small){
                small=Nums[i];
                SmallIndex=i;
                }
                if(Nums[i] > Big){
                        Big=Nums[i];
                   LargeIndex =i;
                }
   
        }
        cout<<"Largest num = "<<Big <<" "<<"At inedx ="<< LargeIndex <<endl;
        cout<<"Smallest num = "<<" "<<small <<"At inedx ="<< SmallIndex <<endl;
        return 0;

}