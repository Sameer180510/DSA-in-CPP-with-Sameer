#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

// 1st Program
// 1. Reverse Linked List
// Method 3
// Using Recursion
ListNode *reverse(ListNode *current, ListNode *previous)
{
    if (current == NULL)
    {
        return previous;
    }

    ListNode *future = current->next;
    current->next = previous;

    return reverse(future, current);
}

int main()
{

    ListNode *Head;
    ListNode *Tail;
    Head = Tail = NULL;

    int arr[5] = {18, 7, 45, 63, 31};
    cout << "Original Array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Creating a Linked List
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new ListNode(arr[i]);
            Tail = Head;
        }
        else
        {
            Tail->next = new ListNode(arr[i]);
            Tail = Tail->next;
        }
    }

    cout << "Linked List is: ";
    ListNode *temp1 = Head;
    while (temp1)
    {
        cout << temp1->val << " ";
        temp1 = temp1->next;
    }
    cout << endl;

    // 1st Program
    // 1. Reverse Linked List
    // Given the head of a singly linked list, reverse the list, and return the reversed list.

    // Method 1
    // Time complexity: O(n)
    // Auxiliary space: O(n) // Because extra vector is created

    /*
    vector<int> ans;
    ListNode *temp = Head;
    while (temp != NULL)
    {
        ans.push_back(temp->val);
        temp = temp->next;
    }

    int i = ans.size() - 1;
    temp = Head;

    while (temp)
    {
        temp->val = ans[i];
        i--;
        temp = temp->next;
    }

    cout << "Reverse Linked List is: ";
    temp = Head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    */

    // Method 2
    // It uses 3 pointer
    // Time complexity: O(n)
    // Auxiliary space: O(1)
    /*
    ListNode *current = Head, *previous = NULL, *future = NULL;

    while (current)
    {
        future = current->next;
        current->next = previous;
        previous = current;
        current = future;
    }

    Head = previous;

    cout << "Reverse Linked list using 3 pointers is: ";
    ListNode *temp2 = Head;
    while (temp2)
    {
        cout << temp2->val << " ";
        temp2 = temp2->next;
    }
    cout << endl;
    */

    // Method 3
    // Using Recursion
    // Time complexity: O(n)
    // Auxiliary space: O(n) // Recursive call will use call stack

    /*
    ListNode *curr = Head, *prev = NULL;

    ListNode *ans;

    // ans = reverse(curr, prev);
    ans = reverse(curr, NULL);

    cout << "Reverse Linked list using recursion is: ";
    ListNode *temp3 = ans;
    while (temp3)
    {
        cout << temp3->val << " ";
        temp3 = temp3->next;
    }
    cout << endl;
    */

    // 2nd Program
    // 2. Middle of the Linked List
    // Given the head of a singly linked list, return the middle node of the linked list.
    // If there are two middle nodes, return the second middle node.

    // Method 1
    // In this method, we will first count the total number of nodes in the linked list and then traverse half of the nodes to reach the middle node
    // Therefore, we will traverse the linked list twice. The first traversal is to count the total number of nodes, and the second traversal is to reach the middle node

    // Time complexity: O(n)
    // Auxiliary space: O(1)

    /*
    // Count total number of nodes
    int count = 0;
    ListNode *temp = Head;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    // This number of steps have to take from start
    temp = Head;
    count /= 2;

    while (count--)
    {
        temp = temp->next;
    }

    cout << "Middle of the linked list is: " << temp->val;
    cout << endl;
    */

    // Method 2
    // Method 1 uses 2 traversals of the linked list, but we can do it in a single traversal using 2 pointers

    ListNode *slow = Head; // slow moves one node at a time
    ListNode *fast = Head; // fast moves two nodes at a time
    // When fast reaches the end, slow reaches the middle

    // while (fast != NULL && fast->next != NULL)
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle of the Linked list is: " << slow->val;

    // Homework
    // 3rd Program
    // 3. Rotate List
    // Given the head of a linked list, rotate the list to the right by k places.

    return 0;
}