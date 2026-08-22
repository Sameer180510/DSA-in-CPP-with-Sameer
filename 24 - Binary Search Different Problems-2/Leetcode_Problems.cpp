// 1. Peak Index in a Mountain Array

// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

// #include<iostream>
// using namespace std;

// int peakIndexInMountainArray(int arr[], int size)
// {
//     int start = 0, end = size - 1, mid;

//     while (start<=end)
//     {
//         // mid=start+(end-start)/2;
//         mid=end+(start-end)/2; // it is use to avoid runtime error

//         // Peak element
//         if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
//         {
//             return mid;
//         }
//         // Right side move
//         else if (arr[mid]>arr[mid-1])
//         {
//             start= mid+1;
//         }
//         // Left side move
//         else
//         {
//             end=mid-1;
//         }

//     }
//     return -1;
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

//     cout<<"\nPeak index in mountain array is: "<<peakIndexInMountainArray(arr,size);

//     return 0;

// }

// 2. Find Minimum in Rotated Sorted Array

// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.

// #include<iostream>
// using namespace std;

// int findMin(int arr[], int size)
// {
//     int start = 0, end = size - 1, mid;
//     int ans=arr[0];

//     while (start<=end)
//     {
//         mid=start+(end-start)/2;

//         if (arr[mid]>=arr[0])
//         {
//             start=mid+1;
//         }
//         else
//         {
//             ans=arr[mid];
//             end=mid-1;
//         }
//     }
//     return ans;

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

//     cout<<"\nMinimum element is:: "<<findMin(arr,size);

//     return 0;

// }

// 3. Search in Rotated Sorted Array

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

// #include <iostream>
// using namespace std;
// int Search(int arr[], int size, int target)
// {
//     int start = 0, end = size - 1, mid;
//     int ans = -1;

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] >= arr[0])
//         {
//             if (arr[start] <= target && arr[mid] >= target)
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//         }
//         else
//         {
//             if (arr[mid] <= target && arr[end] >= target)
//             {
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
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
//     cout << "\nEnter target element: ";
//     cin >> target;

//     cout << "\n Index is " << Search(arr, size, target);

//     return 0;
// }

// 4. Kth Missing Positive Number

// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

// Return the kth positive integer that is missing from this array.

#include <iostream>
using namespace std;
int findKthPositive(int arr[], int size, int target)
{
    int start = 0, end = size - 1, mid;
    int ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] - mid - 1 >= target)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans + target;
}

int main()
{
    int arr[1000];

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter elements in array: \n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int target;
    cout << "\nEnter Kth element: ";
    cin >> target;

    cout << "\n Kth positive missing number is " << findKthPositive(arr, size, target);

    return 0;
}
