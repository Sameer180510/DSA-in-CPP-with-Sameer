#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *CreateLinkedList(vector<int> arr, int index, int size)
{
    // Base Case
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

// 1st Program
// Add Number Linked Lists
// You are given the head of two singly linked lists head1 and head2 representing two non-negative integers. You need to return the head of the linked list representing the sum of these two numbers.

// Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

Node *Reverse(Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        return prev;
    }

    Node *front = curr->next;
    curr->next = prev;

    return Reverse(front, curr);
}

Node *addTwoLists(Node *head1, Node *head2)
{
    // Step 1: Reverse both linked list
    head1 = Reverse(head1, NULL);
    head2 = Reverse(head2, NULL);

    // Step 2: Add Linked list
    Node *curr1 = head1, *curr2 = head2;
    Node *head = new Node(0); // Dummy node
    Node *tail = head;        // Tail pointer to keep track of last node in result list
    int sum, carry = 0;

    while (curr1 && curr2)
    {
        sum = curr1->data + curr2->data + carry;
        tail->next = new Node(sum % 10);

        curr1 = curr1->next;
        curr2 = curr2->next;
        tail = tail->next;
        carry = sum / 10;
    }

    // Agar curr1 exist krta hai to usko bhi add krna hoga
    while (curr1)
    {
        sum = curr1->data + carry;
        tail->next = new Node(sum % 10);

        curr1 = curr1->next;
        tail = tail->next;
        carry = sum / 10;
    }

    // Agar curr2 exist krta hai to usko bhi add krna hoga
    while (curr2)
    {
        sum = curr2->data + carry;
        tail->next = new Node(sum % 10);

        curr2 = curr2->next;
        tail = tail->next;
        carry = sum / 10;
    }

    // Agar carry bacha hai to usko bhi add krna hoga
    while (carry)
    {
        tail->next = new Node(carry % 10);
        tail = tail->next;
        carry /= 10;
    }

    // Step 3: Reverse the list again
    head = Reverse(head->next, NULL);

    // Step 4: Remove leading zeros
    while (head && head->data == 0 && head->next)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return head;
}

// 2nd Program
// Linked List Group Reverse
// Given a Singly linked list, reverse every k node in the linked list and return the head of the modified list. If the node count is not a multiple of k then the left-out nodes at the end, should be considered as a group and must be reversed.

Node *reverseKGroup(Node *head, int k)
{
    // Create a dummy node
    Node *first = new Node(0);
    first->next = head;
    head = first;

    int x;
    Node *second, *curr, *prev, *front;

    while (first->next)
    {
        x = k;
        second = first->next;
        prev = first;
        curr = first->next;

        // Reverse list
        while (x && curr)
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
            x--;
        }
        first->next = prev;
        second->next = curr;
        first = second;
    }
    // Delete dummy node
    first = head;
    head = head->next;
    delete first;

    return head;
}

int main()
{
    /*
    vector<int> arr1 = {3, 7, 1, 9};
    vector<int> arr2 = {4, 2, 8, 5, 6};

    Node *head1 = NULL;
    Node *head2 = NULL;

    head1 = CreateLinkedList(arr1, 0, arr1.size());
    head2 = CreateLinkedList(arr2, 0, arr2.size());

    Node *temp1 = head1;
    cout << "First linked list is: ";
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }

    cout << endl;

    Node *temp2 = head2;
    cout << "Second linked list is: ";
    while (temp2)
    {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }

    cout << endl;

    // 1st Program
    // Time Complexity: O(N+M)
    // Auxiliary Space Complexity: O(N+M)

    cout << "Addition of two list is: ";
    Node *ans = addTwoLists(head1, head2);
    while (ans)
    {
        cout << ans->data << " ";
        ans = ans->next;
    }

    cout << endl;
    */

    vector<int> arr = {3, 7, 1, 17, 45, 63, 10, 56};
    Node *head = NULL;
    head = CreateLinkedList(arr, 0, arr.size());

    cout << "Linked list is: ";
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // 2nd Program
    // Time Complexity: O(N)
    // Auxiliary Space Complexity: O(1)
    int k;
    cout << "Enter value of k: ";
    cin >> k;

    Node *ans = reverseKGroup(head, k);
    cout << "Reverse linked list after every k element is: ";
    Node *temp1 = ans;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
}