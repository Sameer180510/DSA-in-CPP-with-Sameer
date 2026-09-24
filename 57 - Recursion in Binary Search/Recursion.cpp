#include <iostream>
using namespace std;

// 1st Program
// Linear Search
bool linearSearch(int arr[], int target, int index, int size)
{
    if (index == size)
    {
        cout << "Element not found" << endl;
        return 0;
    }

    if (arr[index] == target)
    {
        cout << "Element found at index: " << index << endl;
        return 1;
    }
    return linearSearch(arr, target, index + 1, size);
}

// 2nd Program
// Binary Search
bool binarySearch(int arr[], int target, int start, int end)
{
    if (start > end)
    {
        cout << "Element not founnd !!!" << endl;
        return 0;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        cout << "Element found at index: " << mid << endl;
        return 1;
    }

    else if (arr[mid] > target)
    {
        return binarySearch(arr, target, start, mid - 1);
    }
    else
    {
        return binarySearch(arr, target, mid + 1, end);
    }
}

int main()
{
    // 1st Program
    // Linear Search using Recursion
    // int arr[] = {18, 7, 45, 63, 10, 8, 31, 17, 56};

    // int target;
    // cout << "Enter the element you want to search: ";
    // cin >> target;

    // cout << linearSearch(arr, target, 0, 9);

    int arr[] = {3, 7, 10, 17, 18, 31, 45, 56, 63};

    int target;
    cout << "Enter the element you want to search: ";
    cin >> target;

    cout << binarySearch(arr, target, 0, 9);
}