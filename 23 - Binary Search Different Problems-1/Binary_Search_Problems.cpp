/*

1. Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/

// #include <iostream>
// #include <vector>
// using namespace std;

// // Using vector to return both the first and last occurrence.
// // A function can return only one object, so we return both values
// // together inside a vector.

// vector<int> findFirstAndLast(int arr[], int size, int target)
// {
//     int start = 0, end = size - 1;
//     int mid;
//     int first = -1, last = -1;

//     // Find first
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == target)
//         {
//             first = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     // Find Second
//     start = 0, end = size - 1;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == target)
//         {
//             last = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     // In Leetcode I created a vector like this to return 2 value
//     // Syntax:
//     // vector<datatype> vector_name(Vector_size);
//     // vector<int> a(2);
//     // a[0] = first;
//     // a[1] = last;

//     // return a;
//     return {first, last};
// }

// int main()
// {
//     int arr[1000];

//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;

//     cout << "Enter elements in array: \n";

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array elements are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     int target;
//     cout << "\nEnter the target: ";
//     cin >> target;

//     // main() cannot return a vector<int> because return type of main() is int
//     vector<int> ans = findFirstAndLast(arr, size, target);
//     cout << ans[0] << " " << ans[1];
//     return 0;
// }

// 2. Search Insert Position

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

// #include <iostream>
// using namespace std;

// int searchInsert(int arr[], int size, int target)
// {

//     int start = 0, end = size - 1;
//     int mid;
//     int index = size;

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == target)
//         {
//             index = mid;
//             break;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             index=mid;
//             end = mid - 1;
//         }
//     }
//     return index;
// }
// int main()
// {
//     int arr[1000];

//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;

//     cout << "Enter elements in array: \n";

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array elements are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     int target;
//     cout << "\nEnter the target: ";
//     cin >> target;

//     cout << searchInsert( arr,  size,  target);

//     return 0;
// }

// 3. Sqrt(x)

// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

#include <iostream>
using namespace std;

int sqrt(int target)
{
    int start = 0, end = target, mid;
    int ans = 0;

    //  To avoid runtime error because of divisible by 0 like cases
    if (target<2)
    {
        return target;
    }
    
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // if (mid * mid == target) // It will cause an integer overflow because mid * mid can be a huge number 
        if (mid == target/mid)
        {
            ans = mid;
            break;
        }
        // else if (mid * mid < target)  // It will cause an integer overflow because mid * mid can be a huge number 
        else if (mid < target/mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int target;
    cout << "\nEnter the target: ";
    cin >> target;

    cout << sqrt(target);

    return 0;
}