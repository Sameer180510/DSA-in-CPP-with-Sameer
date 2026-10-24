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

// Insert the value at end using Recursion
Node *CreateLinkedList(int arr[], int index, int size)
{
    // Base Case
    if (index == size)
    {
        return NULL;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

Node *CreateLinkedListBegin(int arr[], int index, int size, Node *previous)
{
    // Base Case
    if (index == size)
    {
        return previous;
    }

    Node *temp;
    temp = new Node(arr[index]);

    temp->next = previous;

    return CreateLinkedListBegin(arr, index + 1, size, temp);
}

int main()
{
    // 1) Static approach
    // cout << "Execution Checking\n";
    // Node A1(7);
    // cout << "Execution Done\n";

    // 2) Dynamic approach

    // Node *Head;
    // Head = new Node(7);

    // cout << Head->data << endl; // 7
    // cout << Head->next << endl; // 0

    // Insert the node at beginning

    /*

    int arr[5] = {18, 7, 45, 63, 31};
    cout << "Original Array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Node *Head;
    Head = NULL; // Otherwise Segmentation fault may occour
    for (int i = 0; i < 5; i++)
    {

    // Linked List doesn't exist
    if (Head == NULL)
    {
        // Head = new Node(7);
        Head = new Node(arr[i]);
        }
        // Linked List exist karti hai
        else
        {
            Node *temp;
            // temp = new Node(18);
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
            }
            }

            // Print the value
            cout << "Insertion at beginning in Linked List is: ";
            Node *temp = Head;

            // while (temp != NULL)
            while (temp)
            {
                cout << temp->data << " ";
                temp = temp->next;
                }
    */

    /*
    // Insert the value at end
    Node *Head, *Tail;
    Tail = Head = NULL;

    int arr[5] = {18, 7, 45, 63, 31};
    cout << "Original Array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        // Linked List doesn't exist
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        // Linked List exist karti hai
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    // Print the value
    cout << "Insertion at the end in Linked List is: ";
    Node *temp;
    temp = Head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    */

    /*
        // Insert the value at end using Recursion
        Node *Head;
        Head = NULL;

        int arr[5] = {18, 7, 45, 63, 31};
        cout << "Original Array is: ";
        for (int i = 0; i < 5; i++)
        {
        cout << arr[i] << " ";
        }
        cout << endl;

        Head = CreateLinkedList(arr, 0, 5);

        // Print the value
        cout << "Insertion at the end in Linked List using Recursion: ";
        Node *temp;
        temp = Head;


        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

    */

    // Insert node at beginning using Recursion
    Node *Head;
    Head = NULL;

    int arr[5] = {18, 7, 45, 63, 31};
    cout << "Original Array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print the value
    // cout << "Inserting node at beginning using Recursion: ";

    // // Head = CreateLinkedListBegin(arr, 0, 5, NULL);
    // Head = CreateLinkedListBegin(arr, 0, 5, Head);

    // Node *temp;
    // temp = Head;

    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // Insert node at particular position
    Head = CreateLinkedListBegin(arr, 0, 5, Head);

    int x = 3; // Insert position
    int value = 10;

    cout << "Inserting node at " << x << " position: ";

    Node *temp = Head;
    x--;

    while (x--)
    {
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print the value
    temp = Head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}