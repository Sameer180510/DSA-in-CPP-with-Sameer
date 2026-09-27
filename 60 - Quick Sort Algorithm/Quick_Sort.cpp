#include <iostream>
using namespace std;

// Pivot ke index ko find kro
int partition(int arr[], int start, int end)
{
    int pos = start;

    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quickSort(int arr[], int start, int end)
{
    // Base case
    if (start >= end)
    {
        return;
    }

    // Pivot ko find kro
    int pivot = partition(arr, start, end);

    // Left side ko divide
    quickSort(arr, start, pivot - 1);

    // Right side ko divide
    quickSort(arr, pivot + 1, end);
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

    quickSort(arr, 0, 11);

    cout << "After sorting: ";

    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
}