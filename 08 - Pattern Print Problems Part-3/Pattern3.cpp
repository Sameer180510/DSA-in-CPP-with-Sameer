#include<iostream>
using namespace std;

int main()
{

    // Program to print a pattern of stars in reverse order by using condition of inner loop as 5-(row-1) instead of row variable
    int row, col, num;

    cout<<"Enter the number : ";
    cin>>num;

    for ( row = 1; row <= num; row++)
    {
        // For printing spaces before stars in pattern
        for ( col = 1; col <= num-row; col++)
        {
            cout<<"  ";
        }

        // For printing stars in pattern
        for ( col = 1; col <= row; col++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        
    }



    // Program to print a pattern of numbers 1, 2 2, 3 3 3, etc upto n times in reverse order using for loop 
    // int row, col, num;

    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = 1; row <= num; row++)
    // {
    //     // For printing spaces before stars in pattern
    //     for ( col = 1; col <= num-row; col++)
    //     {
    //         cout<<"  ";
    //     }

    //     // For printing stars in pattern
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<row <<" ";
    //     }
        
    //     cout<<endl;
        
    // }
    


    // Program to print a pattern of numbers 1, 1 2, 1 2 3, etc upto n times in reverse order using for loop
    // int row, col, num;

    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = 1; row <= num; row++)
    // {
    //     for ( col = 1; col <= num - row; col++)
    //     {
    //         cout<<"  ";
    //     }
        
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<col<<" ";
    //     }
    //      cout<<endl;
        
    // }



    // Program to print a pattern of alphabets using a CHARACTER VARIABLE  in the loop condition. The character 'name' directly iterates from 'A' to the required limit (A + row - 1).
    // int row, col, num;

    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = 1; row <= num; row++)
    // {
    //     for ( col = 1; col <= num-row; col++)
    //     {
    //         cout<<"  ";
    //     }
        
    //     for ( col = 1; col <= row; col++)
    //     {
    //         char name = 'A' + col - 1;
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
        
    // }
    


    // Program to print the same pattern using an INTEGER VARIABLE (col) and converts it into characters. Here, characters are generated using 'A + col - 1' instead of directly iterating a char variable.
    // int row, col, num;
    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = 1; row <= num; row++)
    // {
    //     for ( col = 1; col <= num-row; col++)
    //     {
    //         cout<<"  ";
    //     }

    //     for (char name = 'A'; name <= 'A'+row-1; name++)
    //     {
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;        
    // }




    // Program to print a pattern of numbers 1, 2 1, 3 2 1, etc upto n times in reverse order using for loop
    // int row, col;
    // int num;

    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = 1; row <= num; row++)
    // {
    //     for ( col = 1; col <= num-row; col++)
    //     {
    //         cout<<"  ";
    //     }
        
    //     for ( col = row; col >=1; col--)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }
    

}