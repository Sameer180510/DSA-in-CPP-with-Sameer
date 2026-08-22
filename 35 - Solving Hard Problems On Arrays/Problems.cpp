#include <iostream>
#include <vector>

using namespace std;

// 1. Missing And Repeating

// Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

vector<int> findTwoElement(vector<int> arr)
{
    int size = arr.size();

    // Decraese value by 1
    for (int i = 0; i < size; i++)
    {
        arr[i]--;
    }

    // Occurance
    for (int i = 0; i < size; i++)
    {
        arr[arr[i] % size] += size;
    }

    vector<int> ans(2);

    for (int i = 0; i < size; i++)
    {
        // Repeating element
        if (arr[i] / size == 2)
        {
            ans[0] = i + 1;
        }
        else if (arr[i] / size == 0)
        {
            ans[1] = i + 1;
        }
    }
    return ans;
}



// 2. Majority Element

// Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1.

// Note: A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

int majorityElement(vector<int> arr)
{
    int size = arr.size();
    int element, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            count = 1;
            element = arr[i];
        }
        else
        {
            if (element == arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }

    // This is important for condition "If no majority element exists, return -1."
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }

    if (count > size / 2)
    {
        cout << "Mil gya ";
        cout << element;
    }
    else
    {
        cout << "No such element";
        return -1;
    }
}

// int main()
// {
//     vector<int> arr = {
//         1, 2, 8, 12,
//         3, 4, 9, 15,
//         5, 6, 10, 18,
//         7, 11, 14, 20,
//         13, 16, 17, 17};
//     cout << "Array element are: ";
//     for (int i = 0; i < 20; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     vector<int> ans = findTwoElement(arr);

//     cout << "\nThe duplicate number is: " << ans[0];
//     cout << "\nThe missing number is: " << ans[1] << endl;

//     // Pass by value (arr) will not change the original array but if we use pass by reference (&arr) then it will change it
//     cout << "Array element are: ";
//     for (int i = 0; i < 20; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

int main()
{
    // for the condition if no majority element exists, return -1
    // vector<int> arr = {
    //     1, 2, 8, 12,
    //     3, 4, 9, 15,
    //     5, 6, 10, 18,
    //     7, 11, 14, 20,
    //     13, 16, 17, 17};

    // For the condition majority element always exist
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    cout << "Array element are: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    majorityElement(arr);
}