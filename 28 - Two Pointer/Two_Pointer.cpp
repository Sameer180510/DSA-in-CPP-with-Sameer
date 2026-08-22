// 1. Segregate 0s and 1s
// Given an array arr[] consisting of only 0's and 1's. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.

// #include <iostream>
// using namespace std;

// void segregate0and1(int arr[], int size)
// {
//     int start = 0, end = size - 1;

//     while (start < end)
//     {
//         if (arr[start] == 0)
//         {
//             start++;
//         }
//         else
//         {
//             if (arr[end] == 0)
//             {
//                 swap(arr[start], arr[end]);
//                 start++, end--;
//             }
//             else
//             {
//                 end--;
//             }
//         }
//     }
//     cout << "\nSegregate values in array  are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[1000];
//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;

//     cout << "Enter value in array (Only 0 and 1): \n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Values in array  are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     segregate0and1(arr, size);

//     return 0;
// }

// 2. Two Sum II - Input Array Is Sorted

// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Your solution must use only constant extra space.

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> twoSum(int arr[], int target, int size)
// {
//     int start = 0, end = size - 1;
//     vector<int> ans;

//     while (start < end)
//     {
//         if (arr[start] + arr[end] == target)
//         {
//             ans.push_back(start + 1); // 1 base indexing thats why +1 is used
//             ans.push_back(end + 1);
//             return ans;
//         }
//         else if (arr[start] + arr[end] < target)
//         {
//             start++;
//         }
//         else
//         {
//             end--;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     int arr[1000];
//     int size, target;
//     cout << "Enter size of array: ";
//     cin >> size;

//     cout << "Enter value in array: \n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Values in array  are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << "\nEnter targeted sum: ";
//     cin >> target;

//     vector<int> ans = twoSum(arr, target, size);

//     cout << "Indices which produces targeted sum are: " << ans[0] << " and " << ans[1];

//     cout << "\nNumbers which produce the targeted sum are: " << arr[ans[0] - 1] << " and " << arr[ans[1] - 1];
//     return 0;
// }

// 3. Pair With Given Difference

// Problem Description

// Given an one-dimensional unsorted array A containing N integers.

// You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

// Return 1 if any such pair exists else return 0.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> differnce(int arr[], int target, int size)
{
    sort(arr, arr + size);
    int start = 0, end = 1;
    vector<int> ans;

    if (target < 0) // To avoid divison by 0 error
    {
        target = target * (-1);
    }

    while (end < size)
    {
        // Subtraction is equal to target
        if (arr[end] - arr[start] == target)
        {
            ans.push_back(end);
            ans.push_back(start);
            return ans;
        }
        // Subtraction is less than target
        else if (arr[end] - arr[start] < target)
        {
            end++;
        }
        // Subtraction is greater than target
        else
        {
            start++;
        }
    }

    return ans;
}

int main()
{
    int arr[1000];
    int size, target;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter value in array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Values in array  are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter targeted differnce: ";
    cin >> target;

    vector<int> ans = differnce(arr, target, size);

    cout << "Numbers which produce the targeted differnce are: " << arr[ans[0]] << " and " << arr[ans[1]];
    return 0;
}