#include <iostream>
#include <vector>
using namespace std;


//Optimal solution for Binary Search Algorith.

int Search(vector<int> nums, int target)
{
        int st = 0, end = nums.size()-1;

        while (st <= end)
        {
                int mid =  st +(end -st) / 2;
               if(nums[mid] == target){
                return mid;
               }else if( nums[mid] > target){
                end =mid -1;
               }else{
                st = mid + 1;
               }
        }
        return -1;
}
int main()
{
        vector<int> nums = {1};
        int target = 1;
        cout << Search(nums, target) << endl;
        return 0;
}