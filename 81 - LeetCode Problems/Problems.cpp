#include <iostream>
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

int main()
{
    // int arr[10] = {18, 7, 45, 63, 31, 10, 3, 17, 33, 56};
    int arr[10] = {18, 7, 45, 63, 31, 31, 63, 45, 7, 18}; // Palindrome
    cout << "Original Array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Creating a linked list from given array
    ListNode *head = NULL;
    ListNode *tail = NULL;

    for (int i = 0; i < 10; i++)
    {
        if (head == NULL)
        {
            head = new ListNode(arr[i]);
            tail = head;
        }
        else
        {
            tail->next = new ListNode(arr[i]);
            tail = tail->next;
        }
    }

    // Printing it
    cout << "Linked list is: ";
    ListNode *temp1 = head;
    while (temp1)
    {
        cout << temp1->val << " ";
        temp1 = temp1->next;
    }
    cout << endl;

    // 1st Program
    // 1. Remove Nth Node From End of List
    // Given the head of a linked list, remove the nth node from the end of the list and return its head.

    /*
    int n;
    cout << "Enter the Nth node from end to remove: ";
    cin >> n;

    // Count the total number of nodes in linked list
    int count = 0;
    ListNode *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    count -= n;     // Number of step to traverse
    if (count == 0) // Agar first node ko delete karna ho
    {
        temp = head;
        head = head->next;
        delete temp;

        cout << "Updated linked list is: ";
        ListNode *temp2 = head;
        while (temp2)
        {
            cout << temp2->val << " ";
            temp2 = temp2->next;
        }
        cout << endl;

        return 0;
    }

    ListNode *current = head;
    ListNode *previous = NULL;

    while (count--)
    {
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    delete current;

    cout << "Updated linked list is: ";
    ListNode *temp2 = head;
    while (temp2)
    {
        cout << temp2->val << " ";
        temp2 = temp2->next;
    }
    cout << endl;
    */

    // 2nd Program
    // 2. Remove Every k'th in Linked List
    // Given a singly linked list head ,  your task is to remove every kth node from the linked list.
    // Note: If head is equal to null the driver code will print -1.

    /*
    int K;
    cout << "Enter the value of k to remove every kth element: ";
    cin >> K;

    ListNode *curr = head, *prev = NULL;
    int count = 1;

    if (K == 1)
    {
        cout << "Linked list is empty !!!";
        // return NULL; // worked but // warning: converting to non-pointer type 'int' from NULL [-Wconversion-null]
        return -1;
    }

    while (curr)
    {
        if (K == count)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
    }

    cout << "Updated linked list is: ";
    ListNode *temp3 = head;
    while (temp3)
    {
        cout << temp3->val << " ";
        temp3 = temp3->next;
    }
    cout << endl;
    */

    // 3rd Program
    // 3. Rotate List
    // Given the head of a linked list, rotate the list to the right by k places.

    /*
    int K;
    cout << "Enter the value of k to rotate linked list k times: ";
    cin >> K;

    if (head == NULL || head->next == NULL)
    {
        // return head;
        cout << "Updated linked list is: ";
        ListNode *temp4 = head;
        while (temp4)
        {
            cout << temp4->val << " ";
            temp4 = temp4->next;
        }
        cout << endl;
    }

    int count = 0;
    ListNode *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    K = K % count;
    if (K == 0)
    {
        cout << "Updated linked list is: ";
        ListNode *temp4 = head;
        while (temp4)
        {
            cout << temp4->val << " ";
            temp4 = temp4->next;
        }
        cout << endl;
    }

    count = count - K;

    ListNode *curr = head, *prev = NULL;

    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;

    ListNode *end = curr;
    while (end->next)
    {
        end = end->next;
    }

    end->next = head;
    head = curr;

    cout << "Updated linked list is: ";
    ListNode *temp4 = head;
    while (temp4)
    {
        cout << temp4->val << " ";
        temp4 = temp4->next;
    }
    cout << endl;
    */

    // 4th Program
    // 4. Palindrome Linked List
    // Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

    if (head->next == NULL) // Check if List has only 1 element
    {
        cout << "Linked list is palindrome !!!";
        return 1;
    }

    // Count number of nodes
    int count = 0;

    ListNode *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    count /= 2; // divide in 2 part

    ListNode *curr = head, *prev = NULL;
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL; // break the first part

    ListNode *future = NULL;
    prev = NULL;

    // Reverse the 2nd part of list
    while (curr)
    {
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }

    // prev is pointing to second list
    // head is pointing to first list

    // Check Palindrome
    ListNode *head1 = head;
    ListNode *head2 = prev;

    while (head1)
    {
        if (head1->val != head2->val)
        {
            cout << "Linked list is not palindrome !!!";
            return 0;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    cout << "Linked list is palindrome !!!";
    return 1;
}