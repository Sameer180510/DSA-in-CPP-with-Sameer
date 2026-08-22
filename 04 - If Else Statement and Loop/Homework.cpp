/*
Day 4/180 If-Else and For Loop

    If-else
        1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
        2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
        3. Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
        4. Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

    For Loop
        1. Print “India will win the World Cup 2023”, 20 times.
        2. Print all Odd numbers from 1 to n, take n as an input from the user.
        3. Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

*/

// If-else

// 1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b;

//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"Enter second number: ";
//     cin>>b;

//     if (a>b)
//     {
//         cout<<a<<" is bigger number";
//     }
//     else
//     {
//         cout<<b<<" is bigger number";
//     }
    
// }




// 2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout<<"Enter age of a person: ";
//     cin>>age;

//     if (age>18)
//     {
//         cout<<"Person is Adult";
//     }
//     else
//     {
//         cout<<"Teenager";
//     }
    
// }




// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     if (n==1)
//     {
//         cout<<"January";
//     }
//     else if (n==2)
//     {
//         cout<<"February";
//     }
//     else if (n==3)
//     {
//         cout<<"March";
//     }
//     else if (n==4)
//     {
//         cout<<"April";
//     }
//     else if (n==5)
//     {
//         cout<<"May";
//     }
//     else if (n==6)
//     {
//         cout<<"June";
//     }
//     else if (n==7)
//     {
//         cout<<"July";
//     }
//     else if (n==8)
//     {
//         cout<<"August";
//     }
//     else if (n==9)
//     {
//         cout<<"September";
//     }
//     else if (n==10)
//     {
//         cout<<"October";
//     }
//     else if (n==11)
//     {
//         cout<<"November";
//     }
//     else
//     {
//         cout<<"December";
//     }
    
// }




// 4. Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;

//     if (age<12 || age>65)
//     {
//         cout<<"Yes";
//     }
//     else
//     {
//         cout<<"No";
//     }
    
// }




// For Loop

// 1. Print “India will win the World Cup 2023”, 20 times.

// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i < 21; i++)
//     {
//         cout<<"India will win the World Cup 2027 \n";
//     }
    
// }




// 2. Print all Odd numbers from 1 to n, take n as an input from the user.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for (int i = 1; i <= n; i=i+2)
//     {
//         cout<<i<<" ";
//     }
    
//     return 1;   
// }



// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 1; i <= n; i=i+1)
    {
        if (i % 4 == 0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}