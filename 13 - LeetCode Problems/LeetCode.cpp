#include <iostream>
#include<climits> // for INT_MAX and INT_MIN in question 3
    // climits header file is used to define the limits of integral types in C++. It provides constants such as INT_MAX and INT_MIN, which represent the maximum and minimum values that can be stored in an int data type, respectively. In the context of the Reverse Integer problem, these constants are used to check for potential overflow when reversing the digits of the integer.
using namespace std;

int main()
{

    // Add Digits:
    // Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;

    // while (num > 9)
    // {
    //     int ans = 0 , rem;
    //     while (num!=0)
    //     {
    //         rem = num % 10;
    //         num = num / 10;
    //         ans = rem + ans;
    //     }
    //     num = ans;
    // }
    // cout<<num;


    // Leap Year:
        // You are given an Integer n. Return true if It is a Leap Year otherwise return false.
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (num % 400 == 0)
    // {
    //     cout<<"true";
    // }

    // else if (num % 4 == 0 && num % 100 != 0)
    // {
    //     cout<<"true";
    // }

    // else
    // {
    //     cout<<"false";
    // }



    // Reverse Integer:
        // Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0

    // Only for this program we used climits header file because we need to check for overflow when reversing the digits of the integer. The INT_MAX and INT_MIN constants from the climits header file are used to ensure that the reversed integer does not exceed the limits of a signed 32-bit integer. If the reversed integer exceeds these limits, we return 0 to indicate that the reversal is not possible without overflow.

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // int ans = 0 , rem;
    // while (num!=0)
    // {
    //     rem = num % 10;
    //     num = num / 10;
        
    //     if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
    //     {
    //         return  0;
            
    //     }
    //     ans = ans * 10 + rem;
        
    // }  
    // cout<<ans;



    // Power of Two:
        // Given an integer n, return true if it is a power of two. Otherwise, return false. 
        // An integer n is a power of two, if there exists an integer x such that n == 2x.
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (num < 1)
    // {
    //     cout<<"false";
    //     return 0;
    // }
    
    // while (num != 1)
    // {
    //     if (num % 2 == 1)
    //     {
    //         cout<<"false";
    //         return 0;
    //    }

    //    num = num / 2;
       
    // }

    // cout<<"true";




    // Palindrome Number:
        // Given an integer x, return true if x is a palindrome, and false otherwise.
        
    // int x;
    // cout << "Enter a number: ";
    // cin >> x;

    // int ans = 0, rem, num=x;

    // if (num < 0) // Beacuse of this, no need to use INT_MIN in this program 
    // {
    //     return 0;
    // }
    
    // while (num)
    // {
    //     rem = num % 10;
    //     num/= 10;
    //     if (ans> INT_MAX/10) // Handles the positive value of number
    //     {
    //         cout<<"More than capacity of int data type";
    //         return 0;
    //     }
        
    //     ans = ans * 10 + rem;
    // }

    // if (x == ans)
    // {
    //     cout<<"It is a palindrome: " << ans;
    // }
    // else
    // {
    //     cout<<"It is not a palindrome: " << ans;
    // }



    // Complement of Base 10 Integer:
        //The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
        // For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
        // Given an integer n, return its complement.

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int rem,ans=0, mul=1;
    
    if(num == 0)
    return 1;

    while (num)
    {
        rem = num % 2;
        rem = rem ^ 1;
        num = num / 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    cout<<ans;
    
    
    
    






    
}