#include<iostream>
using namespace std;
int main(){
    // Program to print numbers from 100 to 200
    // int i;
    // for (i=100 ; i<=200 ; i = i + 1){
    //     cout<<i<<" ";
    // }

    // Program to print alphabets from a to z
    // char name ;
    // for (name = 'a'; name <= 'z'; name = name + 1)
    // {
    //     cout<<name<<" ";
    // }

    // Program to print numbers from 10 to 1 without user input
    // int num;
    // for ( num = 10; num >= 1; num = num - 1)
    // {
    //     cout<<num<<" ";
    // }

    // Program to print numbers from 10 to 1 with user input
    // int num, i;
    // cout<<"Enter a number: ";
    // cin>>num;

    // for ( i = num; i >= 1; i = i - 1)
    // {
    //     cout<<i<<" ";
    // }

    // Program to print numbers from n to 100 with a difference of 3
    // int num, i;
    // cout<<"Enter a number: ";
    // cin>>num;

    // for (i = num; i <= 100; i = i + 3){
    //     cout<<i<<" ";
    // }


    // Program to print multiplication table of a number using for loop
    // int num, i;
    // cout<<"Enter a number to print table: ";
    // cin>>num;

    // for ( i = 1; i <= 10; i++)
    // {
    //     cout<<num <<" * " <<i << " = " <<num  * i<<"\n";
    // }


    // Program to print multiplication table of a number using for loop with a difference of the number itself
    // int num, i;
    // cout<<"Enter a number to print table: ";
    // cin>>num;

    // for ( i = num; i<= 10 * num; i = i + num)
    // {
    //     cout<<i <<" ";
    // }

    // Program to print the power of a number using for loop
    // int num, pow, i, n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<"Enter the power: ";
    // cin>>pow;

    // num = n;
    // for ( i = 1; i < pow; i++)
    // {
    //     num = num * n;
    // }
    
    // cout<<num;


    // Program to print the sum of first n natural numbers using for loop
    // int sum = 0, i, n;
    
    // cout<<"Enter a number: ";
    // cin>>n;

    // for ( i = 1; i <= n; i++)
    // {
    //     sum =  sum + i;
    // }
    // cout<<"The sum of first "<<n<<" natural numbers is: "<<sum;
    

    // Program to print the sum of first n natural numbers by using formula without using for loop
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<n * (n+1) / 2;
    


    // Program to print the sum of squares of first n natural numbers using for loop
    // int sum = 0, i, n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // for ( i = 1; i <= n; i++)
    // {
    //     sum =  sum + i * i;
    // }

    // cout<<"The sum of squares of first "<<n<<" natural numbers is: "<<sum;


    // Program to print the factorial of a number using for loop
    // int fact = 1, i, n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for ( i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }

    // cout<<"The factorial of "<<n<<" is: "<<fact;


    // Program to check whether a number is prime or not using for loop
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;

    if (n<2)
    {
        cout<<n<<" is not a prime number";
        return 0;
    }
    else
    {
        for ( i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout<<n<<" is not a prime number";
                return 0;
            }
        }
        cout<<n <<" is a Prime number";
        
    }
    
    
    
}