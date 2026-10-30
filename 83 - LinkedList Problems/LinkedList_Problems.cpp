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

// 2nd Program
Node *CreateLinkedList(vector<int> arr, int index, int size)
{
    // Base case
    {
        if (index == size)
        {
            return NULL;
        }

        Node *temp = new Node(arr[index]);
        temp->next = CreateLinkedList(arr, index + 1, size);
        return temp;
    }
}

int main()
{
    /*

    int arr[10] = {1, 1, 2, 3, 3, 3, 4, 5, 6, 6};
    cout << "Array is: ";
    cout << "Array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;



    // Creating linked list for arr
    Node *head = NULL;
    Node *tail = NULL;
    // for (int i = 0; i < 10; i++)
    for (int i = 0; i < arr.size(); i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    // Creating linked list for arr
    cout << "Linked List is: ";
    Node *temp1 = head;

    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    */

    // 1st Program
    // Remove Duplicates in Sorted Linked List
    // Given the head of a sorted singly linked list, remove all duplicate nodes so that each element appears only once. The resulting linked list should remain sorted.
    // Note: Try to solve the problem without using extra space.

    // 1st Method
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(n), because we are using a vector.

    /*
    vector<int> ans;
    ans.push_back(head->data);

    Node *curr = head->next;

    while (curr)
    {
        // If duplicate nhi mila
        if (ans[ans.size() - 1] != curr->data)
        {
            ans.push_back(curr->data);
        }
        // Else duplicate mila
        curr = curr->next;
    }
    curr = head;
    Node *prev = NULL;
    int index = 0;

    while (index < ans.size())
    {
        curr->data = ans[index];
        prev = curr;
        curr = curr->next;
        index++;
    }

    prev->next = NULL;
    */

    // 2nd Method
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(1)

    /*
    Node *curr = head->next, *prev = head;

    while (curr)
    {
        // Agar duplicate milega
        if (curr->data == prev->data)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        // Agar duplicate nhi mila
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }

    cout << "Updated Linked List is: ";
    Node *temp1 = head;

    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    */

    // 2nd Program

    /*
    vector<int> arr1 = {1, 2, 5, 7, 9, 18, 20};
    cout << "First Array is: ";
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    vector<int> arr2 = {3, 6, 10, 12, 15, 19, 45};
    // cout << "Array is: ";
    cout << "Second Array is: ";
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    Node *head1 = NULL; // for arr1
    Node *head2 = NULL; // for arr2

    // Creating Linked list for arr1
    head1 = CreateLinkedList(arr1, 0, arr1.size());
    cout << "First Linked List is: ";
    Node *temp1 = head1;

    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;

    // Creating Linked list for arr2
    head2 = CreateLinkedList(arr2, 0, arr2.size());
    cout << "Second Linked List is: ";
    Node *temp2 = head2;

    while (temp2)
    {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }
    cout << endl;

    // 2nd Program
    // Merge Two Sorted Linked Lists
    // Given the head of two sorted linked lists consisting of nodes respectively. Merge both lists and return the head of the sorted merged list.

    // Time Complexity: O(n + m)
    // Auxiliary Space Complexity: O(1)

    Node *head = new Node(0); // 0 ko add kr rha hu initially taki linked exist kare taki fir code kam likhna pade
    Node *tail = head;

    while (head1 && head2)
    {
        if (head1->data <= head2->data)
        {
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else
        {
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }

    if (head1)
    {
        tail->next = head1;
    }
    else
    {
        tail->next = head2;
    }

    // Delete first node i.e. 0
    tail = head;
    head = head->next;
    delete tail;

    // return head;
    cout << "Merged Linked list is: ";
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    */

    // 3rd program
    // Sort Linked List of 0s, 1s and 2s
    // Given a linked list where nodes can contain values 0s, 1s, and 2s only. Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end.
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(1)

    Node *head = NULL;

    vector<int> arr = {2, 0, 1, 2, 1, 0, 2, 0, 1, 1};
    cout << "Array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    head = CreateLinkedList(arr, 0, arr.size());

    Node *curr = head;
    int count0 = 0, count1 = 0, count2 = 0;

    // Firsr count the number of 0, 1 and 2 in linked list
    while (curr)
    {
        if (curr->data == 0)
        {
            count0++;
        }
        else if (curr->data == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        curr = curr->next;
    }

    curr = head;
    while (count0--)
    {
        curr->data = 0;
        curr = curr->next;
    }
    while (count1--)
    {
        curr->data = 1;
        curr = curr->next;
    }
    while (count2--)
    {
        curr->data = 2;
        curr = curr->next;
    }

    // return head;
    Node *temp = head;
    cout << "Linked list is: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
