// Divide array in 2 subarray with equal sum
// Given an array of integers arr[], return true if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays are equal. If it is not possible then return false.

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool divideSum(vector<int> v, int size)
// {
//     int prefix = 0, total_sum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         total_sum = total_sum + v[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         prefix = prefix + v[i];
//         int ans = total_sum - prefix;
//         if (ans == prefix)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int size;
//     cout << "Enter the size of Vector: ";
//     cin >> size;

//     vector<int> v(size);

//     cout << "Enter the element in Vector: \n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> v[i];
//     }
//     cout << "Element in Vector are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << v[i] << " ";
//     }

//     cout << endl;
//     cout << divideSum(v, size);
// }

// 2. Kadane's Algorithm

// You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

#include <iostream>
#include <algorithm>
#include<climits> // used for INT_MIN 

using namespace std;

int maxSubarraySum(int arr[], int size)
{
    int maxi = INT_MIN, prefix = 0;

    for (int i = 0; i < size; i++)
    {
        prefix += arr[i];
        maxi = max(maxi, prefix);

        if (prefix < 0)
        {
            prefix = 0;
        }
    }
    return maxi;
}

int main()
{
    int arr[1000];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the element in Vector: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Element in Vector are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Maximum sum of a subarray is: " << maxSubarraySum(arr, size);
}
