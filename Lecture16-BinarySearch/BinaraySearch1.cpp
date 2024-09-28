#include <iostream>
#include <vector>
using namespace std;


//Optimal solution for Binary Search Algorith.

int Search(vector<int> nums, int target)
{
        int st = nums[0], end = nums.size()-1;

        while (st <= end)
        {
                int mid =  st +(end -st) / 2;
                if (target < nums[mid])
                {
                        end = mid - 1;
                }
                else if (target > nums[mid])
                {
                        st = mid + 1;
                }
                else
                {
                        return mid;
                }
        }
        return -1;
}
int main()
{
        vector<int> nums = {5};
        int target = 5;
        cout << Search(nums, target) << endl;
        return 0;
}