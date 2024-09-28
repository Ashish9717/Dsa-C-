#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//Problem 121 -- Best Time to Buy and Sell stock;

int BuySell( vector<int>& prices){
        int n=prices.size();
        int Maxprofit=0;
        int bestBuy =prices[0];
        for(int i=1;i<n;i++){
                if(prices[i] > bestBuy){
                     Maxprofit =max( Maxprofit ,prices[i] - bestBuy);
                        // return bestBuy;
                }  
                 bestBuy =min(bestBuy ,prices[i]);
        } 
        return Maxprofit;

}
int main(){
        vector<int> prices= {7,1,5,3,6,4};
        cout<<BuySell(prices)<<endl;
        return 0;
}
