#include <iostream>
#include<algorithm>
using namespace std;

// 1st Program
int targetSum(int arr[], int index, int size, int sum)
{
    if (index == size)
    {
        return sum == 0;
    }

    return targetSum(arr, index + 1, size, sum) + targetSum(arr, index + 1, size, sum - arr[index]);
}

// 2nd Program
int targetRepeatSum(int arr[], int index, int size, int sum)
{
    if (sum == 0)
    {
        return 1;
    }

    if (index == size || sum < 0)
    {
        return 0;
    }

    return targetRepeatSum(arr, index + 1, size, sum) + targetRepeatSum(arr, index, size, sum - arr[index]);
}
int main()
{
    // 1st Program
    // Perfect sum problem
    // Given an array arr[] of non-negative integers and an integer target, the task is to count all subsets of the array whose sum is equal to the given target.

    // int arr[] = {18, 7, 45, 63, 8, 17, 7, 56, 31, 3, 1, 10};
    // // int arr[] = {2, 5, 6, 1};
    // int sum;
    // cout << "Enter targeted sum: ";
    // cin >> sum;

    // // targetSum(arr, index, arr_size, sum);
    // cout << targetSum(arr, 0, 12, sum);

    // 2nd Program
    // Target sum repeatition
    // Now the number can be repeat multiple times.

    // int arr[] = {18, 7, 45, 63, 8, 17, 7, 56, 31, 3, 1, 10};
    int arr[] = {2, 3, 4};
    int sum;
    cout << "Enter targeted sum: ";
    cin >> sum;

    // targetSum(arr, index, arr_size, sum);
    cout << targetRepeatSum(arr, 0, 3, sum);

    return 0;
}