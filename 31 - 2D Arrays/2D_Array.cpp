#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void printCol(int arr[][4], int row, int col) // It is not manadatort to mentioned the row number but column number is manadatory
{
    // column wise
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
// 3. Print row index with maximum sum
void printRowIndex(int arr[][4], int row, int col)
{
    int sum = INT_MIN, index = -1;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }

        if (sum < total)
        {
            sum = total;
            index = i;
        }
    }
    cout << index << " ";
}

// 4. Print diagonal sum
void diagonalSum(int matrix[][3], int row, int col)
{
    int first = 0, second = 0;

    // First diagonal sum

    for (int i = 0; i < row; i++)
    {
        first += matrix[i][i];
    }

    // Second diagonal sum
    int i = 0, j = col - 1;
    while (j >= 0)
    {
        second += matrix[i][j];
        i++, j--;
    }
    cout << "Sum of first diagonal is: " << first << " and the sum of second diagonal is: " << second;
}

int main()
{
    // Create 2 D Array
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // Print all the values in array row wise
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         cout<<arr[row][col]<<" ";
    //     }

    // }

    // cout<<endl;
    // Print all the values in array column wise, function call
    // printCol(arr,3,4);

    // 1. Find an element in our array
    //  int target = 27;

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         if (arr[row][col] == target)
    //         {
    //             cout << "Yes";
    //             return 0;
    //         }
    //     }
    // }
    // cout << "No";

    // int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr2[3][4] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 16, 15};

    // int ans[3][4];

    // 2. Add 2 matrix

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         ans[row][col] = arr1[row][col] + arr2[row][col];
    //     }
    // }

    // cout << "Adition of matrix 1 and 2 is: ";
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    // }

    // 3. Print row index with maximum sum
    // printRowIndex(arr1, 3, 4);

    // 4. Print diagonal sum
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // diagonalSum(matrix, 3, 3);

    // 5. Reverse each row of matrix
    for (int i = 0; i < 3; i++)
    {
        int start = 0, end = 2;

        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
    }
    
    return 0;
}