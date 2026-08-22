#include <iostream>
#include <cmath> // for using pow() in 2nd program
using namespace std;

// 1st Program:
// Convert small alphbet to capital like 'a' --> 'A'
char Convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

// 2nd Program:
// Armstrong Number

// int Count_Digit(int num)
// {
//     int count = 0;
//     while(num)
//     {
//         count++;
//         num = num / 10;
//     }
//     return count;
// }

// bool Armstrong(int num, int digit)
// {
//     int temp = num, ans = 0, rem;
//     while (temp)
//     {
//         rem = temp % 10;
//         temp = temp / 10;
//         ans = ans + round(pow(rem, digit));
//     }
//     if (ans == num)
//     return 1; // cout<< 1 will have been wriiten if return type of function is void
//     else
//     return 0; // cout<< 0 will have been wriiten if return type of function is void
// }

int main()
{
    // 1st Program:
    // Convert small alphbet to capital like 'a' --> 'A'
    // char name;
    // cout<<"Enter any character: \n";
    // cin>>name;

    // cout<<Convert(name);
    // cout<<endl;

    // 2nd Program:
    // Armstrong Number

    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;

    // // Count digit
    // int digit = Count_Digit(num);

    // // Armstrong number
    // cout<<Armstrong(num, digit); // Armstrong(num, digit); will have been wriiten if return type of Armstrong() function is void

    // 3rd Program:
    // For an integer n, find the number of trailing zeroes in n!.

    // Let number is 112 , then 112 / 5 = 22, then  22 / 5 = 4, and 4 is smaller than 5 therefore 22 + 4 = 26 is the answer
    // int num, count = 0;
    // cout<<"Enter a number: ";
    // cin>>num;

    // while (num>=5)
    // {
    //     count = count + num / 5;
    //     num = num / 5;
    // }
    // cout<<count;

    // 4th Program:
    // Rectangle

    // int a, b, c, d;

    // cout<<"Enter 4 number: \n";
    // cin>>a>>b>>c>>d;

    // if ((a==b && c==d || a==c && b==d || a==d && b==c))
    // {
    //     cout<<"Rectanle will formed"; // return 1;
    // }
    // else
    // {
    //     cout<<"Rectangle is not possible"; // return 0;
    // }

    // 5th Program:
    // Total Moves For Bishop!

    // Given the position of a Bishop (A, B) on an 8 * 8 chessboard.
    // Your task is to count the total number of squares that can be visited by the Bishop in one move.
    // The position of the Bishop is denoted using row and column number of the chessboard.

    // int a, b;
    // cout<<"Enter position of Bishop: \n";
    // cin>>a>>b;

    // int count = 0;

    // count = count + min(8-a, 8-b);
    // count = count + min(8-a, b-1);
    // count = count + min(a-1, b-1);
    // count = count + min(a-1, 8-b);

    // cout<<"Total maximum moves for Bishop is "<<count <<" position";

    // 6th Program
    // Nim Game
    /*
    You are playing the following Nim Game with your friend:
        Initially, there is a heap of stones on the table.
        You and your friend will alternate taking turns, and you go first.
        On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.
        The one who removes the last stone is the winner.
    Given n, the number of stones in the heap, return true if you can win the game assuming both you and your friend play optimally, otherwise return false.
    */

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 4 == 0)
    {
        cout << "You can't wim this game"; // return false;
    }
    else
        cout << "You can win this game"; // return true;
}
