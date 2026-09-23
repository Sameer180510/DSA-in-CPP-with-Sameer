#include <iostream>
#include <algorithm>
using namespace std;

// 1st Method
void printAsscen1(int arr[], int index, int size)
{
    if (index == size)
    {
        return;
    }

    cout << arr[index] << " ";
    printAsscen1(arr, index + 1, size);
}

// 2nd Method
void printAsscen2(int arr[], int index)
{
    cout << arr[index] << " ";
}

// 2nd Program

// 1st Method
void printDescen1(int arr[], int index, int size)
{
    if (index == size)
    {
        return;
    }

    printDescen1(arr, index + 1, size);
    cout << arr[index] << " ";
}

// 2nd Method
void printDescen2(int arr[], int index)
{
    if (index == -1)
    {
        return;
    }

    printDescen2(arr, index - 1); // asscending
    cout << arr[index] << " ";
    // printDescen2(arr, index - 1); // descending
}

// 3rd Program
// 1st method
int sum1(int arr[], int index)
{

    return arr[index];
}

// 2nd method
int sum2(int arr[], int index, int size)
{
    if (index == size)
    {
        return 0;
    }

    return arr[index] + sum2(arr, index + 1, size);
}

// 4th Program
// 1st method

int minElement1(int arr[], int index)
{
    return arr[index];
}

// 2nd method
int minElement2(int arr[], int index, int size)
{
    if (index == size - 1)
    {
        return arr[index];
    }

    return min(arr[index], minElement2(arr, index + 1, size));
}
int main()
{
    // int arr[] = {18, 7, 45, 63, 10, 17, 56, 31};
    // Print all elments in asscending order of array using recursion

    // 1st method
    // using recusion only
    // printAsscen2(arr, 0, 8);

    // 2nd method using for loop
    // for (int i = 0; i < 8; i++)
    // printAsscen2(arr, i);

    // 2nd Program
    // Print all elments in descending order of array using recursion

    // note, index = 0
    // printDescen1(arr, 0, 8);

    // Now, index = arr.size()-1
    // printDescen2(arr, 7);

    // 2nd Program
    // int arr[] = {18, 7, 45, 63, 10, 17, 56, 31};

    // 3rd Program
    // Sum of all element in array

    // Using for loop
    // int sum = 0;
    // cout << "Sum of all array elment is: ";
    // for (int i = 0; i < 8; i++)
    // {
    //     sum += sum1(arr, i);
    // }
    // cout<<sum;

    // Using recursion
    // cout << "Sum of all array elment is: ";
    // cout << sum2(arr, 0, 8);

    // 4th Program
    int arr[] = {18, 7, 45, 63, 10, 17, 56, 31};

    // 1st method

    // cout << "Minimum element in array is: ";
    // int num = arr[0];
    // for (int i = 0; i < 8; i++)
    // {
    //     num = min(num, minElement1(arr, i));
    // }
    // cout<<num;

    // 2nd method
    cout << "Minimum element in array is: ";
    cout << minElement2(arr, 0, 8);

    return 0;
}