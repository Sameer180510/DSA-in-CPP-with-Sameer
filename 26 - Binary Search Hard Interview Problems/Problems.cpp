// 1. Aggressive Cows

// Given an integer array arr[], which denotes the positions of stalls. All the positions are distinct. There are k aggressive cows.

// Assign the cows to the stalls such that the minimum distance between any two cows is maximized.

// #include <iostream>
// #include <algorithm> // For using sort()

// using namespace std;

// int aggressiveCows(int stalls[], int size, int cow)
// {
//     sort(stalls, stalls + size);

//     int start = 1, mid, end, ans;

//     end = stalls[size - 1] - stalls[0];

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         int count = 1, pos = stalls[0];

//         for (int i = 1; i < size; i++)
//         {
//             if (pos + mid <= stalls[i])
//             {
//                 count++;
//                 pos = stalls[i];
//             }
//         }
//         if (count < cow)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int arr[1000];
//     int cow, stalls;

//     cout << "Enter total number of stall: ";
//     cin >> stalls;

//     cout << "Enter stall position: \n";
//     for (int i = 0; i < stalls; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Stalls position is: ";
//     for (int i = 0; i < stalls; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << "\nEnter the number of Cow: ";
//     cin >> cow;

//     cout << "Minimum distance between any two cows is " << aggressiveCows(arr, stalls, cow);
//     return 0;
// }

// 2. Koko Eating Bananas

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

#include <iostream>
using namespace std;

int minEatingSpeed(int arr[], int hour, int size)
{
    int start = 0, end = 0, mid, ans;
    long long sum = 0; // Created to avoid integer overflow error

    for (int i = 0; i < size; i++)
    {
        // start = start + arr[i]; // will create an integer overflow error
        sum = sum + arr[i];
        end = max(end, arr[i]);
    }
    start = sum / hour;

    if (start == 0) // To avoid divisible by 0 error
    {
        start = 1;
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        // mid amount of bananas to consume in 1 hour
        int total_time = 0;

        for (int i = 0; i < size; i++)
        {
            total_time += arr[i] / mid;
            if (arr[i] % mid)
            {
                total_time++;
            }
        }
        if (total_time > hour)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[1000];
    int size, hour;

    cout << "Enter size of piles: ";
    cin >> size;

    cout << "Enter banana in piles: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Banana in piles are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter hour: ";
    cin >> hour;

    cout << "Minimum hours require to eat all banana is: " << minEatingSpeed(arr, hour, size);

    return 0;
}