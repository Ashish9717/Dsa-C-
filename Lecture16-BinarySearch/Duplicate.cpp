#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Check Array contains Duplicate or not.

int ContainDuplicate(vector<int> &nums)
{
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++)
        {
                if (nums[i] == nums[i - 1])
                {
                        return true;
                }
        }
        return false;
}
int main()
{
        vector<int> nums = {1, 2, 3, 1};
        cout << ContainDuplicate(nums) << endl;
        return 0;
}