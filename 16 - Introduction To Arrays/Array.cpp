#include <iostream>
using namespace std;

int main()
{
    // int arr[7]; // Array declare of size 7

    // 1st method to insert in an array
    // fixed (Predefined) size
    // int arr[7] = {18, 7, 45, 63, 17, 3, 10};

    // for(int i = 0; i <7; i++)
    // {
    //     cout<<arr[i] <<"\n";

    // }
    // return 0;

    // 2nd method to insert in an array
    // No fixed size, Size will be depend on insert value in an array then it will automatically adjust to that size
    // int arr[] = {18, 7, 45, 63, 17, 3, 10, 333, 31, 56, 97};

    // for(int i = 0; i<11; i++)
    // {
    //     cout<<arr[i] <<"\n";

    // }
    // return 0;

    // 3rd Method to insert in an array
    // Size of array is more than the actual value inserted in it , so it will print all value first and then 0 at the end
    // int arr[5] = {18, 7, 45};
    // for(int i = 0; i<5; i++)
    // {
    //     cout<<arr[i] <<"\n"; // output: 18, 7, 45, 0, 0

    // }
    // return 0;

    // 4th Method to insert in an array
    // All vlaue inserted in array will be 0
    // Only valid for 0
    // int arr[5] = {0};
    // for(int i = 0; i<5; i++)
    // {
    //     cout<<arr[i] <<"\n"; // Output: 0,0,0,0,0

    // }
    // return 0;

    // 5th Method to insert in an array
    // User will insert value in array 
        // int arr[5];
        // for(int i = 0; i < 5; i++)
        // cin>>arr[i];

        // for (int i = 0; i < 5; i++)
        // cout<<arr[i]<<"\n";
        
        // return 0;

        // We can also ask user for the size of array and then insert value in it
        // But this is not good habit, it not supposed to be done and followed, it is a bad practice 
        // size of array should be always constant not a variable
        // becase it increases the chances of error in our program 
        // Instead of this hum phle se hi array ka size bada kr ke rkh de like 1000 aur user jo bhi size dalega vo 1000 se less rahengi 
       
        // int size;
        // cout<<"Enter the size of array: ";
        // cin>>size;

        // // int arr[size]; // bad practice
        // int arr[1000]; // It should be done, size can be (1-1000) 
        // for(int i = 0; i < size; i++)
        // cin>>arr[i];

        // for (int i = 0; i < size; i++)
        // cout<<arr[i]<<"\n";       
        
        
    // int arr[7] = {18, 7, 45, 63, 17, 3, 10};
    // cout<<arr[0]<<"\n"; //18
    // cout<<arr[3]<<"\n"; //63
    // cout<<arr[6]<<"\n"; //10

    // Out of the bound value 
    // cout<<arr[17]<<"\n"; // 16915504 , generate the random value at that memory location

    // int a;
    // cout<<sizeof(a)<<" "; // 4,  size of a will be print means 4 because size of int is 4 byte

    // float b;
    // cout<<sizeof(b)<<" "; // 4,  size of b will be print means 4 because size of float is 4 byte

    // char c;
    // cout<<sizeof(c)<<" "; // 1,  size of c will be print means 1 because size of char is 1 byte

    // finding the size of an array
    // cout<<sizeof(arr); // 28, because 7 int elements are there in array that means 7 element * 4 bytes = 28 

    // finding the number of elements in an array
    // cout<<sizeof(arr)/sizeof(arr[0]); // 7, 28/4=7



    // find the minimun and maximum value from an array

    int arr[7] = {18, 7, 45, 63, 17, 3, 10};
    // Minimun value
    // int ans = INT8_MAX;

    // for (int i = 0; i < 7; i++)
    // {
    //     if (arr[i]<ans)
    //     {
    //         ans = arr[i];
    //     }
        
    // }
    // cout<<ans;
    // return 0;
    
    // Maximun value
    int ans = INT8_MIN;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i]>ans)
        {
            ans = arr[i];
        }
        
    }
    cout<<ans;
    return 0;
}