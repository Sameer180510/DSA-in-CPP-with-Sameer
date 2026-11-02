#include <iostream>
#include <vector>
#include <unordered_map> // for implementing unordered mapping
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
    // Base case
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

// 1st Program
bool check(vector<Node *> &visited, Node *curr)
{
    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == curr)
        {
            return 1;
        }
    }
    return 0;
}

// 1st Program
// Detect Loop in Linked List
//  Given a singly linked list, find if the given linked list contains a loop or not. A loop exists in a linked list if the next pointer of the last node points to any other node in the list (including itself), rather than being null.
//  Note: Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null. Note that pos is not passed as a parameter.

// 1st method
// Time Complexity: O(n^2)
// Space Complexity: O(n)
// The qustion is asking to solve it in O(n) time, here it will get executed but in GFG it shows Time Limit Exceeded
bool detectLoop(Node *head)
{
    Node *curr = head;
    vector<Node *> visited;

    // Traverse the node
    while (curr)
    {
        // Node is already visited
        if (check(visited, curr)) // if curr present in visited
        {
            return 1;
        }
        // Node is not visited
        visited.push_back(curr);
        curr = curr->next;
    }
    return 0;
}

// 2nd Method
// Here, unordered_map is used
// Syntax: unordered_map < key, value> map_name;
// It is like a dictionary in python, where key is the address of the node and value is a boolean value which is true
bool DetectLoop(Node *head)
{
    Node *curr = head;
    unordered_map<Node *, bool> visited;

    // Traverse the node
    while (curr)
    {
        // Node is already visited
        if (visited[curr] == 1) // Check
        {
            return 1;
        }
        // Node is not visited
        visited[curr] = 1; // map(visited) ke andar insert
        curr = curr->next;
    }
    return 0;
}

// 3rd Method
// Using fast and slow pointer
bool DetectLoop3(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        // fast = fast->next->next->next;
        // fast = fast->next->next->next->next;

        if (slow == fast)
        {
            return 1;
        }
    }
    return 0;
}

// 2nd Program
int lengthOfLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    // now, loop can be break only beacause of 2 condition
    // 1st condition
    if (fast == NULL || fast->next == NULL)
    {
        return 0;
    }

    int count = 1;
    // 2nd condition
    slow = slow->next;

    while (slow != fast)
    {
        count++;
        slow = slow->next;
    }
    return count;
}
int main()
{

    Node *head = NULL;

    vector<int> arr = {18, 7, 45, 63, 31, 10, 1, 3, 56};
    cout << "Array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    head = CreateLinkedList(arr, 0, arr.size());

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = head;

    // cout << "Circular linked list is: ";
    // Node *temp1 = head;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << temp1->data << " ";
    //     temp1 = temp1->next;
    // }

    // cout << endl;

    // 1st Program
    /*
    cout << "Circular linked list is: ";
    Node *temp1 = head;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }

    cout << endl;

    if (detectLoop(head))
    {
        cout << "Loop detected!" << endl;
    }
    else
    {
        cout << "No loop detected!" << endl;
    }
    */

    // 1st Program
    // 2nd Method
    // Here, unordered_map is used
    // Syntax: unordered_map < key, value> map_name;
    // Average Time Complexity: O(n)
    // Worst Case Time Complexity: O(n^2)
    // Space Complexity: O(n)

    /*
    cout << "Circular linked list is: ";
    Node *temp1 = head;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }

    cout << endl;

    if (DetectLoop(head))
    {
        cout << "Loop detected!" << endl;
    }
    else
    {
        cout << "No loop detected!" << endl;
    }
    */

    // 1st Program
    // 3rd Method
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    /*
    Node *temp1 = head;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }

    cout << endl;

    if (DetectLoop3(head))
    {
        cout << "Loop detected!" << endl;
    }
    else
    {
        cout << "No loop detected!" << endl;
    }
    */

    // 2nd Program
    // Cycle Length in Linked List
    // Given the head of a linked list. A linked list contains a cycle if its last node is connected to a previous node. If the given list contains a cycle, return the length of the cycle. Otherwise, return 0.
    // Note: Internally, the driver code uses an integer x to represent the position (1-based indexing) of the node to which the last node is connected. If x = 0, it means last node points to null which indicating there is no loop.

    // Time Complexity: O(n)
    // Space Complexity: O(1)
    
    Node *temp1 = head;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }

    cout << endl;

    cout << "Length of loop in list is: " << lengthOfLoop(head);
    return 0;
}