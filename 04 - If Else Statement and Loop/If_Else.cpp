#include <iostream>
using namespace std;
int main()
{
    // Program to check whether the package is accepted or rejected.
    // int package;
    // cin>>package;

    // if (package>10)
    // {
    //     cout<<"Accepeted";
    // }
    // else
    // {
    //     cout<<"Rejected";
    // }

    // Program to check whether the student has passed or failed.
    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;

    //     if (marks>35)
    //     {
    //         cout<<"Passed";
    //     }
    //     else
    //     {
    //         cout<<"Failed";
    //     }

    // If there is only one statement in if and else block, then we can write it without using curly braces.
    // if (marks > 35)
    // cout << "Passed";
    // else
    // cout << "Failed";


    // Program to check whether the first number is greater than the second number or not.
    // int a,b;
    // cout<<"Enter your first number: ";
    // cin>>a;
    // cout<<"Enter your second number: ";
    // cin>>b;

    // if (a>b){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }

    // Program to check whether the number is even or odd.
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;

    // if (num % 2 ==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }

    // Program to check whether the number is positive, negative or zero.
    // we can write this program withou using curly braces because there is only one statement in each block.
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;

    // if (num > 0)
    // cout<<num <<" is Positive";
    
    // else if (num ==0)
    // cout<<num <<" is Zero";
    
    // else
    // cout<<num <<" is Negative";


    // Program to check whether the character is vowel or consonant.
    // char vowel;
    // cout<<"Enter a character: ";
    // cin>>vowel;

    // if (vowel == 'a' ){
    //     cout<<"Vowel";
    // }
    // else if (vowel == 'e' ){
    //     cout<<"Vowel";
    // }
    // else if (vowel == 'i' ){
    //     cout<<"Vowel";
    // }
    // else if (vowel == 'o' ){
    //     cout<<"Vowel";
    // }
    // else if (vowel == 'u' ){
    //     cout<<"Vowel";
    // }
    // else{
    //     cout<<"Consonant";
    // }


    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;

    // if (n==1){
    //     cout<<"Monday";
    // }
    // else if (n==2){
    //     cout<<"Tuesday";
    // }
    // else if (n==3){
    //     cout<<"Wednesday";
    // }
    // else if (n==4){
    //     cout<<"Thursday";
    // }
    // else if (n==5){
    //     cout<<"Friday";
    // }
    // else if (n==6){
    //     cout<<"Saturday";
    // }
    // else if (n==7){
    //     cout<<"Sunday";
    // }
    // else{
    //     cout<<"Enter a valid day!!!";
    // }



    // Program to print "Sameer" 5 times without using loop
    // cout<<"Sameer\n";
    // cout<<"Sameer\n";
    // cout<<"Sameer\n";
    // cout<<"Sameer\n";
    // cout<<"Sameer\n";

    // Program to print "Sameer" 5 times using loop
    // for (int count =1 ; count<=5 ; count = count + 1){
    //     cout<<"Sameer\n";
    // }

    // Program to print "Sam D2" 10 times using loop
    // for (int count =0 ; count<=9 ; count = count + 1){
    //     cout<<"Sam D2\n";
    // }

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Program to print first n natural numbers using loop
    // for (int count =1 ; count <= n ; count = count + 1){
    //     cout<<count<<"\n";
    // }
    
    // Program to print squares of first n natural numbers using loop    
    // for (int count =1 ; count <= n ; count = count + 1){
    //     cout<<count <<" square is: " <<count* count<<"\n";
    // }
    
    // Program to print first n even numbers using loop
    // for (int count =2 ; count <= n ; count = count +2){
    //     cout<<count<<"\n";
    // } 

    // Program to print first n even numbers using loop and if-else statement combined
    // for (int count =1 ; count <= n ; count = count + 1){
    //     if(count % 2 == 0){
    //         cout<<count<<"\n";
    //     }
    //     else{

    //     }
    // } 
    

    // Program to print first n odd numbers using loop
    for (int count =0 ; count <= n ; count = count + 1){
        if(count % 2 != 0){
            cout<<count<<"\n";
        }
    } 
}