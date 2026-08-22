#include<iostream>
using namespace std;

int main()
{

    // Program to convert a decimal number to binary number using while loop
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;

    // int rem , ans = 0, mul=1;

    // while (num>0)
    // {
    //     // reminder
    //     // rem = num % 2;
    //     rem = num & 1; // If we want to find the remainder when num is divided by 2, we can use the bitwise AND operator (&) with 1. This works because in binary, any number AND 1 will give us the least significant bit, which is equivalent to the remainder when divided by 2.
        
    //     // quotient
    //     // num = num / 2;
    //     // num /= 2; // num = num / 2; is same as num /= 2;
    //     num >>= 1; // num = num / 2; is same as num >>= 1; because right shift by 1 is equivalent to dividing by 2 in binary.
  
    //     // ans
    //     // ans = rem * mul + ans;
    //     ans += rem * mul; // ans = ans + rem * mul; is same as ans += rem * mul;

    //     // mul update
    //     // mul = mul * 10; // mul *= 10; is same as mul = mul * 10;
    //     mul *= 10;
    // }
    // cout<<ans;   


    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int rem , ans = 0, mul = 1;

    // while (num > 0)
    // Optimization:
    while (num) // this will also work because in C++, any non-zero value is considered true and zero is considered false. So, when num becomes 0, the loop will terminate.
    {
        // remainder
        rem = num % 10;
        
        // num ko divide kar do 10 se taki last digit remove ho jaye aur next digit last digit ban jaye
        num = num / 10;

        // ans
        ans = rem * mul + ans;

        // mul 
        mul = mul * 2;

    }
    cout<<ans;
}