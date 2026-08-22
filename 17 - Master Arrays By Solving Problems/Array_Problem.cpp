#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

// int search(int num)
// {
    // 1st Program 
    // Array Search
    // Given an array, arr[] of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.    
    // int arr[6] = {2, 4, 5, 3, 6, 9};
    // int temp = -1;

    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] == num)
    //     {
    //         temp = i; // return i;
    //         return temp;
    //         break;
    // }
    // }
    // return temp; // return -1;

// }


// 2nd Program 
// Reverse an array 

void Reverse()
{
    // 1st approach
    // Copy the reversed temp array back into arr.
    // int arr[6] = {4, 6, 3, 5, 1, 2};

    // int temp[6];

    // int j=0;

    // for (int i = 5; i >= 0; i--)
    // {
    //     temp[j]=arr[i];
    //     j++;
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     arr[i]= temp[i];
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // 2nd approach
    // By using swapping, use swap function
    // int arr[6] = {4, 6, 3, 5, 1, 2}; // even array
    // int arr[5] = {4, 6, 3, 5, 1}; // odd array
    
    // int start=0, end=4;

    // while (start<end)
    // {
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }

    // for (int i = 0; i < 5 ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}

// 3rd Program
// Second Largest 
// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.
// Note: The second largest element should not be equal to the largest element.


int SecondLargest()
{
    // int arr[6] = {4, 6, 34, 56, 1, 2}; 

    // Largest element
    // int ans = -1; // ans = INT_MIN not beacuse condition is "If the second largest element doesn't exist then return -1."
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i]> ans)
    //     ans = arr[i];
    // }
    
    // // Second largest element
    // int second = -1; // Same here no INT_MIN
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] != ans)
    //     second = max(arr[i],second);
    // }

    // return second; 

}

// 4th Program
// Missing in Array

int missingNum()
{
//     int num ;
//     cout<<"Enter array size: ";
//     cin>>num;

//     // Sum of all element in array
//     int arr[num-1];
//     cout<<"Enter array elements: ";

//     int ans = 0;
//     for (int i = 0; i < num-1; i++)
//     {
//         cin>>arr[i];
//         ans = ans + arr[i];
//     }
    

    // Sum of n number 
    // int sum = num * (num + 1 ) / 2; 

    // return sum-ans;

}

// 5th Program
// Fibonacci Series
void Fibonacci()
{
    // int num;
    // cout<<"Enter a number: "; 
    // cin>>num;

    // int arr[1000];

    // // first = 0
    // // second = 1

    // arr[0] = 0;
    // arr[1] = 1;

    // for (int i = 2; i <= num-1 ; i++)
    // {
    //     arr[i] = arr[i-1] + arr[i-2];
    // }
    // cout<<arr[num-1]<<" ";
}

// 6th Program
// Rotate Array by One
// Given an array arr, rotate the array by one position in clockwise direction.

void Rotate()
{
    // int arr[1000];
    // int num;
    // cout<<"Enter array size: ";
    // cin>>num;

    // cout<<"Enter array elements: ";
    // // Insert elements in array
    // for (int i = 0; i < num; i++)
    // {
    //     cin>>arr[i];
    // }

    // int last = arr[num-1]; 

    // // Element shift to its right
    // for (int i = num-2; i >= 0; i--)
    // {
    //     arr[i+1]=arr[i];
    // }
    // arr[0]=last;

    // for (int i = 0; i < num; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }    
}

// 7th Program
// Passing array in function

void Pass_array(int arr[], int num) // arr[] is not an array, It is a pointer
{
    cout<<sizeof(arr);
    cout<<endl;    
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    
    // 1st Program 
    // Array Search
    
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;
    
    // cout<<search(num);
    
    
    
    
    // 2nd Program 
    // Reverse an array 
    
    // Reverse();
    
    
    
    // 3rd Program
    // Second Largest element in array
    
    // cout<<SecondLargest();
    
    
    // 4th Program
    // Missing in Array
    // You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.
    

    // cout<<"Mising elements: "<<missingNum();
    
    
    // 5th Program
    // Fibonacci Series
    
    // Fibonacci();
    
    
    // 6th Program
    // Rotate Array by One
    
    // Rotate();
    
    
    
    // 7th Program
    // Passing array in function

    int arr[6] = { 3, 5, 1, 6, 8, 2};

    cout<<sizeof(arr);
    cout<<endl;
    
    Pass_array(arr, 6); // (array name, size of array)
    cout<<endl;
}
