#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements in array: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Array elements before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            {
                break;
            }
            
        }
        
    }
    
    cout<<"Array elements after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    


}