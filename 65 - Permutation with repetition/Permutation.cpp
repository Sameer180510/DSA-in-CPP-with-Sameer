#include <iostream>
#include <vector>
using namespace std;

// 1st Program
// 1. Permutations II
void permutation(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    // Base Case
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    vector<bool> visited(21, 0);

    for (int i = index; i < nums.size(); i++)
    {
        if (visited[nums[i] + 10] == 0)
        {
            swap(nums[index], nums[i]);
            permutation(nums, ans, index + 1);
            swap(nums[index], nums[i]);
            visited[nums[i] + 10] = 1;
        }
    }
}

// 2nd Program
// Coin Change (Count Ways)

int countWays(vector<int> &coins, int sum)
{
    // Base Case
    if (sum == 0)
    {
        return 1;
    }

    if (sum < 0)
    {
        return 0;
    }

    int ans = 0;

    for (int i = 0; i < coins.size(); i++)
    {
        ans += countWays(coins, sum - coins[i]);
    }

    return ans;
}

int main()
{
    // 1st Program
    // 1. Permutations II

    // Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

    // vector<int> nums = {1, 2, 3};
    // vector<int> nums = {1, 1, 2};

    // cout << "Original array is: " << endl;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    // cout << endl;

    // vector<vector<int>> ans;

    // cout << "All possible unique permutations in array: " << endl;
    // permutation(nums, ans, 0);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[0].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 2nd Program
    // Coin Change (Count Ways)
    // Given an integer array coins[ ] representing different denominations of currency and an integer sum, find the number of ways you can make sum by using different combinations from coins[ ].
    // Note: Assume that you have an infinite supply of each type of coin. Therefore, you can use any coin as many times as you want.
    // Answers are guaranteed to fit into a 32 - bit integer.return 0;

    vector<int> coins = {2,5,3,6};

    int sum;
    cout << "Enter the sum: ";
    cin >> sum;

    cout << "Total number of ways we can make sum by using different combinations from coins: ";

    // countWays(arr, sum);
    cout << countWays(coins, sum);
}