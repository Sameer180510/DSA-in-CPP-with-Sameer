#include<iostream>
using namespace std;

int main()
{

    // While loop: 1. initialization 2. break 3. update

    // // Program to print the first n natural numbers using while loop
    // int i = 1; // initialization
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // while (i<=n) // condition / break
    // {
    //     cout<<i<<" ";
    //     i++; // update
    // }



    // Program to print the table of a number using while loop
    // int n;
    // cout<<"Enter the number to print table of: ";
    // cin>>n;

    // int i = 1; // initialization
    // while (i<=10) // break
    // {
    //     cout<<i*n<<" ";
    //     i++; // update
    // }



    // Do-while loop: 1. initialization 2. update 3. break

    // Program to print the first n natural numbers using do-while loop
    // int i = 1; // initialization
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // do
    // {
    //     cout<<i<<" ";
    //     i++; // update
    // } while (i<=n); // break


   
    // Program to print the table of a number using do-while loop
    // int i = 1; // initialization
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // do
    // {
    //     cout<<i*n<<" ";
    //     i++; // update
    // } while (i<=10); // break



    // Program to print the sum of first n natural numbers using do-while loop
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // int sum = 0;
    // int i = 1;

    // do
    // {
    //     sum = sum + i;
    //     i++;
    //     cout<<sum<<" ";
    // } while (i<=n);



    // Break statement

    // Program to print numbers from 1 to 10 but stop when it reaches 8 using while loop
    // int i = 1; 

    // while (i<=10)
    // {
    //     if (i==8)
    //     {
    //         break;
    //     }
    //     cout<<i<<" ";
    //     i++;
    // }



    // Program to print numbers from 1 to 10 but stop when it reaches 8 using for loop
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i==8)
    //     {
    //         break; // exit the loop when i is 8
    //     }
    //     cout<<i<<" ";   
    // }
    


    // Continue statement

    // Program to print numbers from 1 to 20 but skip multiples of 4 using while loop
    // int i = 1;

    // while (i<=20)
    // {
    //     if (i%4==0)
    //     {
    //         i++;  // increment before continue to avoid infinite loop
    //         continue; // skip printing multiples of 4
    //     }
    //     cout<<i<<" ";
    //     i++;  // increment for next iteration
    // }


    // Program to print numbers from 1 to 20 but skip multiples of 4 using for loop
    // for (int i = 1; i <= 20; i++)
    // {
    //     if (i%4==0) // skip printing multiples of 4
    //     {
    //         continue;
    //     }
    //     cout<<i<<" ";
        
    // }



    // Switch statement

    // Program to print the name of a person based on the number entered using switch statement
    // int i;
    // cout<<"Enter a number: ";
    // cin>>i;
    
    // switch (i) // i can be an integer or a character but not a float or a double
    // {
    // case 1:
    //     cout<<"Sameer ";
    //     break; // exit the switch statement after executing the case
    // case 2:
    //     cout<<"Aditya ";
    //     break; // if break is not used, it will continue to execute the next cases until it finds a break or reaches the end of the switch statement
    // case 3:
    //     cout<<"Ishan ";
    //     break;
    // case 4:
    //     cout<<"Krunal ";
    //     break;
    
    // default:
    //     cout<<"Invalid input ";
    //     break;
    // }



    // Program to print the name of the day based on the number entered bu user using switch statement
    // int day;
    // cout<<"Enter a number: ";
    // cin>>day;

    // switch (day)
    // {
    // case 1:
    //     cout<<"Monday";
    //     break;

    // case 2:
    //     cout<<"Tuesday";
    //     break;

    // case 3:
    //     cout<<"Wednesday";
    //     break;

    // case 4:
    //     cout<<"Thursday";
    //     break;
        
    // case 5:
    //     cout<<"Friday";
    //     break;

    // case 6:
    //     cout<<"Saturday";
    //     break;

    // case 7:
    //     cout<<"Sunday";
    //     break;
    
    // default:
    //     cout<<"Enter a valid day ";
    //     break;
    // }
    
    
    
    // Scope of variables
    

    // cout<<n; // error: 'n' was not declared in this scope 
    // int n = 18; 
    // cout<<n;

    // int n = 20; // error: redefinition of 'n' because n is already defined in the same scope
    // cout<<n;


    // int n = 10;
    // int i = 1;

    // if (i==1)
    // {
    //     cout<<n<<" "; // this will print 10 because it is referring to the n defined outside the if block
        
    //     int n = 20; // this n is different from the n defined outside the if block because it is defined in a different scope (block scope)
        
    //     cout<<n; // this will print 20 because it is referring to the n defined

    //     // int n = 21; // error: redeclaration of 'int n'

    // }


    // Scope of variables in loops


    // Here, a new variable 'i' is declared inside the for loop (int i = 10)
    // This 'i' is local to the loop and completely separate from the outer 'i = 20'
    // The loop prints values from 10 to 30 using this local 'i'
    // After the loop ends, the local 'i' is destroyed, and the outer 'i' remains unchanged (still 20)

    // int n = 10;
    // int i = 20;

    // for (int i = 10; i <=30; i++) 
    // {
    //     cout<<i<<" ";
    // }


    // Here, no new 'i' is declared in the loop, so the already declared outer 'i' is used.
    // The loop starts by setting i = 10 and prints values up to 30.
    // With each iteration, the same 'i' is incremented.
    // After the loop ends, 'i' becomes 31 (since the loop stops when i > 30),
    // meaning the original 'i' variable is modified.
    
    // int n = 10;
    // int i = 20;

    // for (i = 10; i <=30; i++) 
    // {
    //     cout<<i<<" ";
    // }


    int n = 10;
    int i = 20; 

    for (; i <= 30; i++) // Here, the loop uses the already declared 'i' without reinitializing it. The loop starts with i = 20 
    {
        cout<<i<<" "; 
    }

}