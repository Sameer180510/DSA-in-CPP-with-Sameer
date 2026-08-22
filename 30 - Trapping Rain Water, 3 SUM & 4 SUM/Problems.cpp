// 1. Trapping Rain Water

// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

// #include <iostream>
// using namespace std;

// int trapMaxWater(int arr[], int size)
// {
//     int maxleft = 0, maxright = 0, total_water = 0, index = 0, maxheight = arr[0];

//     // Find the height of maximum building
//     for (int i = 0; i < size; i++)
//     {
//         if (maxheight < arr[i])
//         {
//             maxheight = arr[i];
//             index = i;
//         }
//     }

//     // Find the height of maxleft building
//     for (int i = 0; i < index; i++)
//     {
//         if (maxleft > arr[i])
//         {
//             total_water += maxleft - arr[i];
//         }
//         else
//             maxleft = arr[i];
//     }

//     // Find the height of maxright building
//     for (int i = size - 1; i > index; i--)
//     {
//         if (maxright > arr[i])
//         {
//             total_water += maxright - arr[i];
//         }
//         else
//             maxright = arr[i];
//     }
//     return total_water;
// }
// int main()
// {
//     int arr[1000];
//     int size, target;
//     cout << "Enter size of array: ";
//     cin >> size;

//     cout << "Enter the height of buildings: \n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Height of buildings are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << "\nMaximum water buildings can trap after raining is " << trapMaxWater(arr, size);
//     return 0;
// }

// 2. Triplet Sum in Array
// Given an array arr[] and an integer target, determine if there exists a triplet in the array whose sum equals the given target.

// Return true if such a triplet exists, otherwise, return false.
#include <iostream>
#include <algorithm>
using namespace std;

void hasTripletSum(int arr[], int size, int target)
{
    sort(arr, arr + size);
    
    for (int i = 0; i < size - 2; i++)
    {
        int ans = target - arr[i];

        int start = i + 1, end = size - 1;

        while (start < end)
        {
            if (arr[start] + arr[end] == ans)
            {
                cout << "A triplet in the array whose sum equals the given target are: " << arr[i] << " , " << arr[start] << " and " << arr[end];
                break;
            }
            else if (arr[start] + arr[end] < ans)
            {
                start++;
            }
            else
                end--;
        }
    }
}

int main()
{
    int arr[1000];
    int size, target;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter the integer in array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Integer in array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the targeted triplet sum in array: ";
    cin >> target;

    hasTripletSum(arr, size, target);
    return 0;
}
