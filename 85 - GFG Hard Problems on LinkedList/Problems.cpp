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
// Remove Cycle in Linked List
// Given the head of a singly linked list. A cycle exists if the last node points back to a previous node, forming a loop. Remove the loop from the linked list if it exists.
// Internally, the driver code uses a variable x (1-based indexing) to represent the position of the node to which the last node is connected.
// The driver code will print "true" if the linked list is correctly modified, otherwise it will print "false".

void removeLoop(Node *head)
{
    // 1st step: Loop detect
    Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    // Ab loop sirf 2 chijo ke vajah se break ho skta hai ya fir slow == fast
    // 1st reason
    if (fast == NULL || fast->next == NULL)
    {
        return;
    }

    // 2nd step: slow ko head pe lao
    slow = head;

    // 3rd step: slow fast ko ek jagah pr lao
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // 4th step: fast ko vhi pr rkh kr slow ko fast tk traverse krna in the loop
    while (slow->next != fast)
    {
        slow = slow->next;
    }

    // 5th Step: NULL bana do
    slow->next = NULL;
}

// 1st program
// 2nd Method
void RemoveLoop(Node *head)
{
    Node *slow = head, *fast = head;

    // 1st step: Loop detect
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    // Ab loop sirf 2 chijo ke vajah se break ho skta hai ya fir slow == fast
    // 1st reason
    if (!fast || !fast->next)
    {
        return;
    }

    // Step 2: Find the length of loop (count)
    slow = fast->next;
    int count = 1;

    while (slow != fast)
    {
        count++;
        slow = slow->next;
    }

    // Step 3: slow aur fast dono ko head pe lao
    slow = head, fast = head;

    // Step 4: Fast ko count distance tak door rkhna hai from the slow
    while (count--)
    {
        fast = fast->next;
    }

    // Ab slow, fast se count distance pr hoga
    // Step 5: slow aur fast dono ko ek ek node move krna hai
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Step 6: Ab List ka loop break krna hai
    while (slow->next != fast)
    {
        slow = slow->next;
    }

    slow->next = NULL;
}

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// 2nd Program
Node *intersectPoint(Node *head1, Node *head2)
{
    Node *curr1 = head1, *curr2 = head2;

    int count1 = 0, count2 = 0;

    // Count the number of nodes in both list
    while (curr1)
    {
        count1++;
        curr1 = curr1->next;
    }
    while (curr2)
    {
        count2++;
        curr2 = curr2->next;
    }

    // curr1 aur curr2 ko vaps head1 and head2 pe lao
    curr1 = head1, curr2 = head2;

    // Dono me se kisi ko bhi aage move karo
    while (count1 > count2)
    {
        curr1 = curr1->next;
        count1--;
    }

    while (count2 > count1)
    {
        curr2 = curr2->next;
        count2--;
    }

    // Ab Dono ko sath me aage move karao
    while (curr1 != curr2)
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    // Ab check karo ki dono ka intersection point hai ya nahi
    if (!curr1 || !curr2)
    {
        return NULL;
    }

    return curr1;
}

Node *IntersectPoint(Node *head1, Node *head2)
{
    // Step 1: List 1 ko full traverse karo aur last me tail ko head1 se point kr do
    // Make List 1 circular
    Node *curr1 = head1;

    while (curr1->next)
    {
        curr1 = curr1->next;
    }
    curr1->next = head1;

    // Ab Loop detect krna hai list 2 me
    // Detect the cycle in List 2
    Node *slow = head2, *fast = head2;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    if (fast == NULL || fast->next == NULL) // List not connected
    {
        return NULL;
    }

    // Step 3: Find the starting point of the cycle
    // slow ko vaps head2 pr le jao
    slow = head2;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}
int main()
{
    Node *head = NULL;

    /*
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

    cout << "Circular linked list is: ";
    Node *temp3 = head;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }

    cout << endl;
    */

    // 1st Program
    // Remove Cycle in Linked List

    // 1st method
    // Time Complexity: O(N)
    // Space Complexity: O(1)

    // removeLoop(head);

    // cout << "removeLoop() function executed successfully!" << endl;

    // Node *temp2 = head;

    // cout << "Linked List after removing loop: ";

    // while (temp2 != NULL)
    // {
    //     cout << temp2->data << " ";
    //     temp2 = temp2->next;
    // }

    // cout << endl;

    // 2nd method
    // length of loop is used
    // Time Complexity: O(N)
    // Space Complexity: O(1)

    /*
    RemoveLoop(head);

    cout << "removeLoop() function executed successfully!" << endl;

    Node *temp2 = head;

    cout << "Linked List after removing loop by method 2: ";

    while (temp2 != NULL)
    {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }

    cout << endl;

    */

    // 2nd Program
    // Intersection in Y Shaped Lists
    // Given the heads of two non-empty singly linked lists, head1 and head2, return the node where the two linked lists intersect. If the two lists do not intersect, return null.
    // Note: The custom input contains a non-empty singly linked list common. Initially, head1 and head2 do not share any node. The last node of each list is then connected to the head of common, creating an intersection at the first node of common. If common is empty, the two lists do not intersect at all.

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *common = NULL;

    vector<int> arr1 = {18, 7, 45, 63, 10};
    vector<int> arr2 = {12, 99, 23, 33, 17};
    vector<int> arr3 = {25, 19, 96, 1, 8};

    // Create arr1 linked list
    head1 = CreateLinkedList(arr1, 0, arr1.size());

    // Create arr2 linked list
    head2 = CreateLinkedList(arr2, 0, arr2.size());

    // Create common linked list
    common = CreateLinkedList(arr3, 0, arr3.size());

    // Connect arr1 to common
    Node *temp1 = head1;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }

    temp1->next = common;

    // Connect arr2 to common
    Node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = common;

    cout << "First Linked List: ";
    printLinkedList(head1);

    cout << "Second Linked List: ";
    printLinkedList(head2);

    // 1st Method
    // Time Complexity: O(N + M)
    // Space Complexity: O(1)

    /*

    // Find intersection point
    Node *ans = intersectPoint(head1, head2);

    if (ans != NULL)
    {
        cout << "Intersection point is at: " << ans->data << endl;
    }
    else
    {
        cout << "No intersection point !!!" << endl;
    }
    */

    // 2nd Method

    // Find intersection point
    Node *ans = IntersectPoint(head1, head2);

    if (ans != NULL)
    {
        cout << "Using second method, Intersection point is at: " << ans->data << endl;
    }
    else
    {
        cout << "No intersection point !!!" << endl;
    }
    return 0;
}