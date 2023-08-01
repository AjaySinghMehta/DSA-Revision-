/* return power set of a givern array*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 creating power set

 base case : if i runs out of array/subset
                    then include the element till then and return
            

*/

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case :
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums,output, index+1, ans);

    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> powerset(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    powerset(nums);
    return 0;
}