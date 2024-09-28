#include<iostream>
#include<vector>
#include<climits>
using namespace std;


//Leetcode problem 11 --Optimal solution;

int MostWater(vector<int>& height){
            int high =height.size()-1 , start =0;
            int maxwater =0;
              while(start < high){
                int width =high -start;
                int ht= min(height[start] ,height[high]);
                int area = width *ht;
                  maxwater =max(area ,maxwater);
           height[start] < height[high] ? start++ : high--;
          
          
        }
        return maxwater;
}
int main(){
        vector<int> height ={2,3,4,5,18,17,6};
        cout<<MostWater(height) <<endl;
        return 0;
}