#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//Leetcode Problem 11 --Most contain water;

// Given code gives Time Limit Exceed on leetcode ,Means this not optimal solution;

int MostWater(vector<int>&  height){
        int n=height.size();
        int width =0 , High =0 , area= 0;
        int maxWater =INT_MIN;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                width =j-i;
                High =min(height[i] , height[j]);
                area = width * High;
              
              maxWater =max(area  , maxWater);
        }
        

       }
       return maxWater;
}
int main(){
        vector<int> height ={2,3,4,5,18,17,6};

        cout<<MostWater(height) <<endl;
        return 0;


}