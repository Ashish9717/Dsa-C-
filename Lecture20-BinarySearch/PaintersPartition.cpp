// Problem Statement -- Given are N boards of each given in the form of array and M painter , such that each painters takes 1 unit of time to paint 1 unit of the board

#include<iostream>
#include<vector> 
#include<climits>
using namespace std;

bool isValid(vector<int>& nums ,int n , int m , int MaxAllowedTime){
        int Painter = 1 , time = 0;
        for(int i =0; i<n ;i++){
            if( time + nums[i] <= MaxAllowedTime){
                time = time + nums[i];
            }else{
                Painter++;
                time =nums[i];
            }
        }
        return Painter <= m;
}


int PaintersPrtition(vector<int>& nums , int n ,int m ){
        if(m> n) return false ;
        int sum =0 , maxval =INT_MIN;
        int size = nums.size();
        for(int i=0;i< size; i++){
                sum = sum + nums[i];
                maxval = max(maxval  , nums[i]);
        }

        int ans = -1 ;
        int left = maxval , right = sum ;

        while(left <= right){
                int mid = left + (right - left ) / 2 ;
                if(isValid(nums , n ,m , mid)){
                        ans = mid ;
                        right = mid -1 ;

                }else{
                        left = mid + 1;
                }

        }
        return ans ;

}
int  main(){
        vector<int> nums = {40 ,30,10,20};
        int n=4 ,m =2;
        cout<<PaintersPrtition(nums , n , m )<<endl;
        return 0;
}