#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    // start, end, mid
    int start = 0, end = size-1;
    
    while (start<=end)
    {
        //  mid ko find karo
        // int mid = (start + end) / 2; // this works here but it can cause integer overflow in big number
        int mid = start + (end - start) / 2; // so we can use it like this

        // arr[mid] == key
        if (arr[mid] == key)
        {
            return mid;
        }

        // arr[mid] < key
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        // arr[mid] > key
        else
        {
            end = mid - 1;
        }   
    }
    return -1;
}
int main()
{
    int arr[1000];

    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    cout<<"Enter elements in array: \n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int key;
    cout<<"\nEnter the key: ";
    cin>>key;

    cout<<BinarySearch(arr, size, key);
    return 0;    
}