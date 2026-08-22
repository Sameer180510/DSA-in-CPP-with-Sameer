#include<iostream>
using namespace std;
int main(){

    // Program to print a pattern of stars using for loop
    // int i, j, num;

    // cout<<"Enter a number: ";
    // cin>>num;

    // for ( i = 1; i <= num; i++)
    // {
    //     for ( j = 1; j <= num; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<"\n";   
    // }

    // Program to print a pattern of stars  5 times using for loop
    // int row, col;

    // for ( row = 1; row <= 5; row++)
    // {
    //     for ( col = 1; col <= 5; col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"\n";   
    // }
    
    // Program to print a pattern of numbers 10 10 10 10 10 four times using for loop
    // int row, col;

    // for ( row = 1; row <= 4; row++)
    // {
    //     for ( col = 1; col <= 5; col++)
    //     {
    //         cout<<"10 ";
    //     }
    //     cout<<"\n";   
    // }
    

    // Program to print a pattern of numbers 1 1 1 1 1, 2 2 2 2 2, etc upto five times using for loop
    // int row, col;

    // for ( row = 1; row <= 5; row++)
    // {
    //     for ( col = 1; col <= 5; col = col + 1)
    //     {
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // Program to print a pattern of numbers 1 2 3 4 5, 1 2 3 4 5, etc upto five times using for loop
    // int row, col;

    // for ( row = 1; row <= 5; row++)
    // {
    //     for ( col = 1; col <= 5; col++)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<"\n";
    // }
    
    

    // Program to print a pattern of numbers 5 4 3 2 1, 5 4 3 2 1, etc upto five times using for loop
    // int row, col;

    // for ( row = 1; row <= 5; row++)
    // {
    //     for ( col = 5; col >= 1; col = col - 1)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<"\n";
    // }


    // Program to print a pattern of numbers 1 4 9 16 25, 1 4 9 16 25, i.e. square of column number etc upto five times using for loop
    // int row, col;

    // for ( row = 1; row <=5; row++)
    // {
    //     for ( col = 1; col <= 5; col++)
    //     {
    //         cout<<col * col <<" ";
    //     }
    //     cout<<"\n";        
    // }


    // Program to print a pattern of numbers 1 8 27 64 125, 1 8 27 64 125, i.e. cube of column number etc upto five times using for loop
    // int row, col;

    // for ( row = 1; row <=5; row++)
    // {
    //     for ( col = 1; col <= 5; col++)
    //     {
    //         cout<<col * col * col<<" ";
    //     }
    //     cout<<"\n";        
    // }


    // Program to print a pattern of characters a a a a a, b b b b b, etc upto five times using for loop
    // int row, col;   

    // for ( row = 1; row <= 5; row = row + 1)
    // {
    //     char name = 'a'+row-1;

    //     for ( col = 1; col <= 5; col= col + 1)
    //     {
    //         cout<<name<<" ";
    //     }
    //     cout<<"\n";        
    // }


    // Program to print a pattern of characters a b c d e, a b c d e, etc upto five times using for loop
    // int row;
    // char col;
    
    // for ( row = 1; row <=5; row++)
    // {
    //     for ( col = 'a'; col <= 'e'; col++)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<"\n";
        
    // }



    // Program to print a pattern of characters a b c d e, a b c d e, etc upto five times using same for loop as above but using char variable for column number instead of int variable and using ASCII value of char variable to print the pattern
    // int row, col;   

    // for ( row = 1; row <= 5; row = row + 1)
    // {
        
    //     for ( col = 1; col <= 5; col= col + 1)
    //     {
    //         char name = 'a'+col-1;
    //         cout<<name<<" ";
    //     }
    //     cout<<"\n";        
    // }
    


    // Program to print a pattern of numbers 1 2 3 4 5, 6 7 8 9 10, etc upto five times using for loop by using count variable
    // int row, col, count;
    // count = 1;

    // for ( row = 1; row <= 5; row = row + 1)
    // {
    //     for ( col = 1; col <= 5; col = col + 1)
    //     {
    //         cout<<count<< " ";
    //         count = count + 1;
    //     }
    //     cout<<"\n";
    // }


    // Program to print a pattern of numbers 1 2 3 4 5, 6 7 8 9 10, etc upto five times using for loop but using formula to print the pattern instead of using count variable
    int row, col;

    for ( row = 1; row <= 5; row = row + 1)
    {
        for ( col = 1; col <= 5; col = col + 1)
        {
           cout<<(row-1)*5+col<<" ";
        }
        cout<<"\n";
    }
    
    
}