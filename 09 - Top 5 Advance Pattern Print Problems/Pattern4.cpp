#include<iostream>
using namespace std;
int main()
{
    // Program to print a pattern of stars like *, *** , ***** etc in reverse order using for loop
    // int row, col, num;

    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = 1; row <= num; row++)
    // {
    //     // For printing spaces before stars in pattern
    //     for ( col = 1; col <= num - row; col++)
    //     {
    //         cout<<"  ";
    //     }

    //     // For printing stars in pattern
    //     for ( col = 1; col <= row + row - 1; col++)
    //     {
    //         cout<<"* ";
    //     }
        
    //     cout<<endl;
        
    // }
    


    // Program to print a pattern of numbers 1, 1 2 1, 1 2 3 2 1, etc upto n times in reverse order using for loop
    // int row, col, num;
    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = 1; row <= num; row++)
    // {
    //     // Print space
    //     for ( col = 1; col <= num - row; col++)
    //     cout<<"  ";
        
    //     // Print 1 to row
    //     for ( col = 1; col <=row; col++)
    //     {
    //         cout<<col<<" ";            
    //     }

    //     // Print row-1 to 1
    //     for ( col = row-1; col>=  1; col= col - 1)
    //     cout<<col<<" ";
        

    //     cout<<endl;
    // }
    


    // Program to print a pattern of stars like ***** , *** , * etc upto n times in reverse order using for loop
    // int row, col, num;
    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = num; row >= 1; row--)
    // {
    //     // Print space
    //     // ((2*num-1)-(2*row-1))/2 is equivalent to num-row
    //     for ( col = 1; col <= (num-row); col++)
    //     {
    //         cout<<"  ";
    //     }
        
    //     // Print *
    //     for ( col = 1; col <= 2*row-1; col++)
    //     {
    //         cout<<"* ";
    //     }
        
    //     cout<<endl;
    // }



    // Program to print a star pattern like * * * * * *, * *      * *, *          * , by explicitly coding upper half (row = num → 1) and lower half (row = 1 → num) as two separate parts, even though logic inside is same  
    // My approach:
    // int row, col, num;
    // cout<<"Enter the number : ";
    // cin>>num;

    // // Print upper half of the pattern
    // for ( row = num; row >= 1; row--)
    // {
    //     // Print *
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
        
    //     // Print space
    //     for ( col = 1; col <= (2*num-2*row); col++)
    //     {
    //         cout<<"  ";
    //     }
        
    //     // Print *
    //     for ( col = row; col >= 1; col--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }

    // // Print lower half of the pattern
    // for (row = 1; row<=num; row++)
    // {
    //     // Print *
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }

    //     // Print space
    //     for ( col = 1; col <= (2*num-2*row); col++)
    //     {
    //         cout<<"  ";
    //     }

    //     // Print *
    //     for ( col = row; col >= 1; col--)
    //     {
    //         cout<<"* ";
    //     }

    // cout<<endl;  
    // }



    // Program to print a star pattern like * * * * * *, * *      * *, *          * , by recognizing inner logic is identical and only changing row traversal direction (decreasing then increasing) to form full pattern
    // 2nd approach (Coder Army's approach):
    
    // int row, col, num;
    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = num; row >= 1; row = row -1)
    // {
    //     // Print *
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     // Print space
    //     for ( col = 1; col <= (2*num-2*row); col++)
    //     {
    //         cout<<"  ";
    //     }
    //     // Print *
    //     for ( col = row; col >= 1; col--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for ( row = 1; row <= num; row = row +1)
    // {
    //     // Print *
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     // Print space
    //     for ( col = 1; col <= (2*num-2*row); col++)
    //     {
    //         cout<<"  ";
    //     }
    //     // Print *
    //     for ( col = row; col >= 1; col--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    //Program to print a star pattern butterfly like *      *,**    **, ***  ***, **** ****, by using a single loop for row traversal and recognizing that logic for upper half and lower half is identical, only difference is row traversal direction (increasing then decreasing) to form full pattern

    // int row, col, num;
    // cout<<"Enter the number : ";
    // cin>>num;

    // for ( row = 1; row <= num; row++)
    // {
    //     // Print *
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
        
    //     // Print space
    //     for ( col = 0; col < 2*num -2*row; col++)
    //     {
    //         cout<<"  ";
    //     }
        
    //     // Print *
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for ( row = num-1; row >= 1; row--)
    // {
    //     // Print *
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
        
    //     // Print space
    //     for ( col = 0; col < 2*num -2*row; col++)
    //     {
    //         cout<<"  ";
    //     }
        
    //     // Print *
    //     for ( col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    // Program to print a diamond star pattern like * , ** , *** , ****, *** , **, * etc by recognizing that logic for upper half and lower half is identical, only difference is row traversal direction (increasing then decreasing) to form full pattern 
    int row, col, num;
    cout<<"Enter the number : ";
    cin>>num;

    for ( row = 1; row <= num; row++)
    {
        for ( col = 1; col <= num - row; col++)
        {
            cout<<" ";
        }
        for ( col = 1; col <= row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    for ( row = num; row >= 1; row--)
    {
        for ( col = 1; col <= num - row; col++)
        {
            cout<<" ";
        }
        for ( col = 1; col <= row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    
    
       
}