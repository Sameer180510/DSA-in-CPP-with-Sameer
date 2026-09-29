#include <iostream>
#include <vector>
using namespace std;

// 1st Program
// Subset Sum
void subsetsSum(int arr[], int index, int size, int sum, vector<int> &ans)
{
    // We can printing sum in this function below
    // if (index == size)
    // {
    //     cout << sum << endl;
    //     return;
    // }

    // We can print it in the main function
    if (index == size)
    {
        ans.push_back(sum);
        return;
    }

    // For not included
    subsetsSum(arr, index + 1, size, sum, ans);

    // For yes included
    subsetsSum(arr, index + 1, size, sum + arr[index], ans);
}

// 2nd Program
// Target Sum

bool targetSum(int arr[], int index, int size, int target)
{
    // Base case
    if (target == 0)
    {
        // cout << "Sum is possible " << endl;
        return 1;
    }

    if (index == size || target < 0)
    {
        // cout << "Sum is not possible " << endl;
        return 0;
    }

    //  No || Yes
    // target agar subset ka part nhi hua || target agar subset ka part hua
    return targetSum(arr, index + 1, size, target) || targetSum(arr, index + 1, size, target - arr[index]);
}

int main()
{
    // 1st Program
    // Subset Sum

    // int arr[] = {18, 7, 45, 10};

    // vector<int> ans;

    // // subsetsSum(arr, index, size, sum_variable);
    // subsetsSum(arr, 0, 4, 0, ans);

    // cout << "Sum of subsets of array elements: ";
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }

    // 2nd Program
    // Target Sum

    int arr[] = {18, 7, 45, 63, 10, 3, 31};

    int target;
    cout << "Enter the targeted sum: ";
    cin >> target;

    cout << targetSum(arr, 0, 7, target) << " ";

    return 0;
}