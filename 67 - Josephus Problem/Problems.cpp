#include <iostream>
#include <vector>
using namespace std;

// 1st Program
int winner(vector<bool> &person, int n, int index, int person_left, int k)
{
    // Base case
    if (person_left == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (person[i] == 0)
            {
                return i;
            }
        }
    }

    // Find the postion of kill
    int kill = (k - 1) % person_left;

    // Ab kill krna hai
    while (kill--)
    {
        index = (index + 1) % n;
        while (person[index] == 1)
        {
            index = (index + 1) % n; // skip the killed person
        }
    }

    // Ab kill ki position pta lg gyi hai
    person[index] = 1;

    // Find the next alive person
    while (person[index] == 1)
    {
        index = (index + 1) % n;
    }

    return winner(person, n, index, person_left - 1, k);
}

// 2nd Program
// (Optimized Code)

int josephus(int n, int k)
{
    // Base case
    if (n == 1)
    {
        return 0;
    }

    return (josephus(n - 1, k) + k) % n;
}

int main()
{
    // 1. Find the Winner of the Circular Game

    // There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise from the nth friend brings you to the 1st friend.

    // The rules of the game are as follows:

    // Start at the 1st friend.
    // Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
    // The last friend you counted leaves the circle and loses the game.
    // If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
    // Else, the last friend in the circle wins the game.
    // Given the number of friends, n, and an integer k, return the winner of the game.

    int n;
    cout << "Enter the number of friends (n): ";
    cin >> n;

    int k;
    cout << "Enter the elimination space (k): ";
    cin >> k;

    // 1st method
    // Time and Space Complexity: 0(n square)

    // vector<bool> person(n, 0); // Shows person eliminated or not

    // cout << "The winner is: ";

    // cout<<winner(person, n, index, person_left , k);
    // cout << winner(person, n, 0, n, k) + 1;

    // 2nd method
    // It does not need any person array , therefor both time and space complexity is reduced
    // Time and Space Complexity: 0(n)

    cout << "The winner is: ";
    cout << josephus(n, k) + 1;

    return 0;
}