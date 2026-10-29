#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;
    Node *prev = NULL;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

// 3rd Program
//! Creating a doubly linked list using an array using recursion

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
    // Base case
    if (index == size)
    {
        return NULL;
    }

    // Agar node nhi hai to create karo
    Node *temp = new Node(arr[index]);

    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);

    return temp;
}

int main()
{
    // 1st Program
    //! Creating a doubly linked list
    /*
    Node *head = NULL;

    // Insert at start

    // Linked list doesn't exist
    if (head == NULL)
    {
        head = new Node(7);
    }

    // Linked list already exist
    else
    {
        Node *temp = new Node(7);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    // Printing Doubly linked list
    cout << "Doubly linked list is: ";
    Node *temp1 = head;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    */

    int arr[10] = {18, 7, 45, 63, 31, 10, 3, 17, 33, 56};
    cout << "Array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2nd Program
    //! Creating a doubly linked list using an array

    /*
    Node *head = NULL, *tail = NULL;

    for (int i = 0; i < 10; i++)
    {
        // Agar list empty hui to
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }

        // Agar linked list already exist karti hai
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    // Printing Doubly linked list
    cout << "Doubly linked list is: ";
    Node *temp1 = head;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    */

    // 3rd Program
    //! Creating a doubly linked list using an array using recursion

    /*
    Node *head = NULL;

    head = CreateDLL(arr, 0, 10, NULL);

    // Printing Doubly linked list
    cout << "Doubly linked list using recursion is: ";
    Node *temp1 = head;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    */

    // 4th Program
    //! Insert at any position in linked list

    /*
    Node *head = NULL;

    head = CreateDLL(arr, 0, 10, NULL);

    int pos;
    cout << "Enter index at which you want to add a node: ";
    cin >> pos;

    // Extra Edge Case, to handle invalid position
    if (pos < 0 || pos > 10)
    {
        cout << "Abe galat position hai, It should be within the range of 0 and 10\n";
        return 0;
    }

    // Edge case 1: Insert at start
    if (pos == 0)
    {
        // Linked list exist na kare
        if (head == NULL)
        {
            head = new Node(1);
        }

        // Linked list exist karti hai
        else
        {
            Node *temp = new Node(1);
            temp->next = head;
            temp->prev = NULL;
            head->prev = temp;
            head = temp;
        }
    }

    else
    {
        // Go to the node where the insertion should done
        Node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }

        // Edge case 2: Insert at end
        if (curr->next == NULL) // last node
        {
            Node *temp = new Node(1);
            temp->next = NULL;
            temp->prev = curr;
            curr->next = temp;
            curr = temp;
        }

        // Normal Case: Insert at middle
        else
        {
            Node *temp = new Node(1);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }
    cout << "Updated Doubly linked list is: ";
    Node *temp1 = head;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    */

    // 5th Program
    //! Delete a node at start

    Node *head = NULL;

    head = CreateDLL(arr, 0, 10, NULL);
    // head = CreateDLL(arr, 0, 1, NULL); // for test case
    // head = CreateDLL(arr, 0, 2, NULL); // for test case

    /*
    if (head != NULL)
    {
        // If only one node exist
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }

        // If more than 1 node exist
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }

        // Agar 1 hi element ho to
        // if (head)
        // {
        //     head->prev = NULL;
        // }
    }
    */

    // 6th Program
    //! Delete a node at end

    /*
    if (head != NULL)
    {
        // if only one node exists
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        // If more than 1 node exists
        else
        {
            // Pahle last node tk pahuchna pdega
            Node *curr = head;
            while (curr->next)
            {
                curr = curr->next;
            }

            curr->prev->next = NULL;

            delete curr;
        }
    }
    */

    // 7th Program
    //! Delete a node at any given position

    int pos;
    cout << "Enter index from which you want to delete a node: ";
    cin >> pos;

    if (pos < 0 || pos > 10)
    {
        cout << "Abe galat position hai, It should be within the range of 0 and 10\n";
        return 0;
    }

    if (head != NULL)
    {
        // Delete at start
        if (pos == 1)
        {
            // Only 1 node exist
            if (head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            // More than 1 node exist
            else
            {
                Node *temp = head;
                head = head->next;
                delete temp;
                head->prev = NULL;
            }
        }
        else
        {
            // postion tak travel kro
            Node *curr = head;

            while (--pos)
            {
                curr = curr->next;
            }

            // Delete last node
            if (curr->next == NULL)
            {
                curr->prev->next = NULL;
                delete curr;
            }

            // Delete at middle
            else
            {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
            }

            delete curr;
        }
    }

    cout << "Updated Doubly linked list is: ";
    Node *temp1 = head;
    while (temp1)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
}