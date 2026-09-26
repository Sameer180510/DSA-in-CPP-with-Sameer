#include <iostream>
#include <vector>
using namespace std;

// Merge the divided array
void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);

    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++, left++;
        }

        else
        {
            temp[index] = arr[right];
            index++, right++;
        }
    }

    // Agar Left array me fir bhi element baki hai to...
    while (left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }

    // Agar right array me fir bhi element baki hai to...
    while (right <= end)
    {
        temp[index] = arr[right];
        index++, right++;
    }

    // Abhi temp ke sare elements ko vapas main array(arr) me paltana hai
    index = 0;
    while (start <= end)
    {
        arr[start] = temp[index];
        start++, index++;
    }
}

// Divide the array then call merge()
void mergeSort(int arr[], int start, int end)
{
    // Base case
    if (start == end)
    {
        return;
    }

    // Divide the array
    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    // Merge the array
    merge(arr, start, mid, end);
}
int main()
{
    int arr[] = {18, 7, 45, 63, 8, 17, 7, 56, 31, 3, 1, 10};

    cout << "Before sorting: ";
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, 12);

    cout << "After sorting: ";
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}