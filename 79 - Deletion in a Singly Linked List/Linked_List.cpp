#include <iostream>
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

Node *CreateLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

//! Delete a node at any Position in linked list using recursion
Node *deleteNode(Node *current, int x)
{
    if (x == 1)
    {
        Node *temp = current->next;
        delete current;

        return temp;
    }

    current->next = deleteNode(current->next, x - 1);

    return current;
}

int main()
{
    Node *Head;
    Head = NULL;

    int arr[5] = {18, 7, 45, 63, 31};
    cout << "Original Array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Head = CreateLinkedList(arr, 0, 5);

    // cout << "Linked list is: ";
    // while (Head)
    // {
    //     cout << Head->data << " ";
    //     Head = Head->next;
    // }
    // cout << endl;

    //! Delete a node from start

    /*
    if (Head != NULL)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }

    cout << "Deleting first element from linked list: ";
    while (Head)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
    */

    //! Delete a node from end
    /*
    // 3 Cases:

    Head = CreateLinkedList(arr, 0, 5); // 18 7 45 63
    // Head = CreateLinkedList(arr, 0, 1); // only one element // blank
    // Head = CreateLinkedList(arr, 0, 2);  // now 2 element // 18

    // 1) Linked list does not exist
    if (Head != NULL)
    {
        // 2) Linked list me sirf 1 node hai
        if (Head->next == NULL)
        {
            Node *temp = Head;
            delete temp;
            Head = NULL;
        }

        // 3) Linked list me more than 1 node hai
        else
        {
            Node *current = Head;
            Node *previous = NULL;

            while (current->next != NULL)
            {
                previous = current;
                current = current->next;
            }

            previous->next = current->next;
            delete current;
        }
    }

    cout << "Deleting last element from linked list: ";
    while (Head)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
    */

    //! Delete a node at any Position in linked list
    // Linked List Delete at Position
    // Given the head of a linked list and an integer x, delete the node at position x and return the updated head of the linked list.
    // Note: Positions use 1-based indexing.

    /*
    Head = CreateLinkedList(arr, 0, 5);

    int x;
    cout << "Enter position you want to delete: ";
    cin >> x;
    // cout << endl;

    if (x == 1)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;

        return 0;
    }

    x--;
    Node *current = Head;
    Node *previous = NULL;

    while (x--)
    {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    delete current;

    cout << "Linked list is: ";
    while (Head)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
    */

    //! Delete a node at any Position in linked list using recursion
    /*
    Head = CreateLinkedList(arr, 0, 5);

    int x;
    cout << "Enter position you want to delete: ";
    cin >> x;

    Head = deleteNode(Head, x);

    cout << "Linked list is: ";
    while (Head)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
    */

    // Delete Node Without Linked List Head
    // Given a node x in a singly linked list, delete this node without access to the head of the linked list. The driver code will print the updated linked list to verify the deletion.

    // Note: It is guaranteed that x is not the last node of the linked list.

    Head = CreateLinkedList(arr, 0, 5);

    int x;
    cout << "Enter position you want to delete: ";
    cin >> x;

    Node *current = Head;

    // Move current to the node to be deleted
    for (int i = 1; i < x; i++)
    {
        current = current->next;
    }

    cout << "Linked list is: ";

    Node *temp = current->next;
    current->data = temp->data;
    current->next = temp->next;
    delete temp;

    while (Head)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}