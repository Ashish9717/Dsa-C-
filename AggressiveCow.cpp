
// Aggressive Cows Problem  
// Assign c to n Stalls such that min distance between then is largest possible .
//Return Largest minimum distance.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

bool isPosible(vector<int>& nums , int n , int c , int MinAllowed ){
 
  int cows = 1 , Lasposition = nums[0] ;
  for(int i = 1 ;i<n;i++){
    if((nums[i] - Lasposition ) >= MinAllowed ){
      cows++;
      Lasposition = nums[i];
    }
    if(cows == c) return true ;
  }
  return false;
}

int AggressiveCows(vector<int>& nums , int n , int c ){
       sort(nums.begin() , nums.end());
      // int n = nums.size();
      int left =1 , right = nums[n-1] - nums[0] ;
      int ans = -1;
      while(left <= right){
        int mid = left + ( right - left) / 2;

        if(isPosible(nums , n , c , mid)){
          ans = mid ;
          left = mid+1;
        }else{
          right = mid -1 ;
        }
      }
      return ans ;
}
int  main(){
   vector<int> nums ={1,2,8,4,9};
   int n=5 , c= 3;
   cout<<AggressiveCows(nums ,n ,c) <<endl;
   return 0;
}