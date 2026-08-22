// 1. Allocate Minimum Pages

// Given an array arr[] of integers, where each element arr[i] represents the number of pages in the i-th page. You also have an integer k representing the number of students. The task is to allocate pages to each student such that:

// Each student receives atleast one page.
// Each student is assigned a contiguous sequence of pages.
// No page is assigned to more than one student.
// All pages must be allocated.
// The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum. If it is not possible to allocate pages to all students, return -1;

// Note: Test cases are generated such that the answer always fits in a 32-bit integer.

// #include <iostream>
// using namespace std;

// int findPage(int arr[], int student, int book)
// {
//     if (student > book)
//     {
//         cout<<"\nNo. of students are more than total books";
//         return -1;
//     }

//     int start = 0, end = 0, mid, ans=-1;

//     for (int i = 0; i < book; i++)
//     {
//         start = max(start, arr[i]);
//         end += arr[i];
//     }

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         int count = 1, page = 0;

//         for (int i = 0; i < book; i++)
//         {
//             page = page + arr[i];

//             if (page > mid)
//             {
//                 count++;
//                 page = arr[i];
//             }
//         }
//         if (count <= student)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int arr[1000];

//     int book;
//     cout<<"Enter the number of book: ";
//     cin>>book;

//     int student;
//     cout<<"Enter the total no. of student: ";
//     cin>>student;

//     cout<<"Enter book pages: \n";
//     for (int i = 0; i < book; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Books are: ";
//     for (int i = 0; i < book; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     cout<<"\nMaximum number of pages assigned to any student is "<<findPage(arr,student,book);
//     return 0;
// }




// 2. The Painter's Partition Problem-II

// Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.

// Determine the minimum amount of time required to paint all the boards, under the constraint that each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).

#include <iostream>
using namespace std;

long long minTime(int arr[], int painter, int board)
{
    long long start = 0, end = 0, mid, ans = -1;

    for (int i = 0; i < board; i++)
    {
        if (start < arr[i])
        {
            start = arr[i];
        }

        end += arr[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int count = 1;
        long long length = 0;

        for (int i = 0; i < board; i++)
        {
            length = length + arr[i];

            if (length > mid)
            {
                count++;
                length = arr[i];
            }
        }
        if (count <= painter)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[1000];

    int board;
    cout << "Enter the number of board: ";
    cin >> board;

    int painter;
    cout << "Enter the total no. of painter: ";
    cin >> painter;

    cout << "Enter length of board: \n";
    for (int i = 0; i < board; i++)
    {
        cin >> arr[i];
    }

    cout << "length of board are: ";
    for (int i = 0; i < board; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nMinimum amount of time required to paint all the boards is " << minTime(arr, painter, board);
    return 0;
}