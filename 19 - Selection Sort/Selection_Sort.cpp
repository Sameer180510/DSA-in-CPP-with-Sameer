#include<iostream>
using namespace std;
int main()

{
    /*
    Total (n−1)​ pass required, n is the size of array.
    Time Complexity of Selection Sort
    Best Case: O(n²)
    Average Case: O(n²)
    Worst Case: O(n²)
    */
    
    // Selection Sort, fixed array size, without user input
    
    // int arr[7]={18,7,45,63,31,56,1};
    
    // for (int i = 0; i < 6; i++)
    // {
    //     int index = i;
    //     for (int j = i+1; j < 7; j++)
    //     {
    //         if (arr[j]<arr[index])
    //         {
    //             index = j;
    //         }            
    //     }
    //     swap(arr[i],arr[index]);        
    // }
    
    // for (int i = 0; i <= 6; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // Selection Sort, Taking user input in array
    int arr[1000];
    int size;
    cout<<"Enter size of an array: ";
    cin>>size; // Size of array

    // Inserting elements in array
    cout<<"Enter elements in array: \n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    

    for (int i = 0; i < size-1; i++)
    {
        int index = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[index])
            {
                index = j;
            }            
        }
        swap(arr[i],arr[index]);        
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    // LeetCode Problem: but not solved becuase, Time Limit Exceeded while submitting the code.
    // because here it is asking for total O(nlog(n)) time and the time complextiy of Selection Sort is O(n²) 
    // Sort an Array
    // Given an array of integers nums, sort the array in ascending order and return it.
    // You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.
}