#include <iostream>
#include <vector>
#include <algorithm> // using it for sorting vector

using namespace std;

int main()
{
    // // Create Vector, declare
    // // Syntax: vector<Datatype>vector_name;
    // vector<int> v;

    // // size and capacity

    // cout << "Size of v: " << v.size() << endl;
    // cout << "Capacity of v: " << v.capacity() << endl;

    // // Inserting value
    // v.push_back(7);
    // cout << "Size of v: " << v.size() << endl;
    // cout << "Capacity of v: " << v.capacity() << endl;

    // v.push_back(18);
    // v.push_back(45);
    // cout << "Size of v: " << v.size() << endl;
    // cout << "Capacity of v: " << v.capacity() << endl;

    // // update value
    // v[1] = 17; // index 1 value will be updated to 17

    // // Initialize a vector
    // // Creating another vector
    // // Syntax: vector<Datatype>Vector_Name(Size, Value)
    // vector<int> v1(5, 1);
    // cout << "Size of v1: " << v1.size() << endl;
    // cout << "Capacity of v1: " << v1.capacity() << endl;

    // v1.push_back(6);
    // cout << "Size of v1: " << v1.size() << endl;
    // cout << "Capacity of v1: " << v1.capacity() << endl;

    // // Another method of initialization of vector
    // vector<int> v3 = {18, 7, 45, 63, 33};
    // cout << "Size of v3: " << v3.size() << endl;
    // cout << "Capacity of v3: " << v3.capacity() << endl;

    // Deleting value from vector
    // Creating new vector
    // vector<int> vnew;
    // vnew.push_back(18);
    // vnew.push_back(7);
    // vnew.push_back(8);
    // vnew.push_back(1);
    // vnew.push_back(45);
    // cout << "Size of vnew: " << vnew.size() << endl;
    // cout << "Capacity of vnew: " << vnew.capacity() << endl;
    // vnew.pop_back(); // Deleting last value from vector so 45 will be removed from vector
    // cout << "Size of vnew: " << vnew.size() << endl;
    // cout << "Capacity of vnew: " << vnew.capacity() << endl;

    // // Removing value from the middle of vector
    // vnew.erase(vnew.begin() + 2); // Value from index 2 will be get removed
    // cout << "Size of vnew: " << vnew.size() << endl;
    // cout << "Capacity of vnew: " << vnew.capacity() << endl;

    // // Printing value of vector (almost same like array)
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout<<endl;
    // // Inserting value in vector at particular index
    // // Syntax: vnew.insert(vnew.begin()+Target_Index, value)
    // vnew.insert(vnew.begin()+2,69); // 18 7 69 1
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout<<endl;

    // // update value
    // vnew[1]=77;
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout<<endl;

    // vnew.clear(); // Remove all elements from vector, size becomes 0 but capacity remains same as original
    // cout << "Size of vnew: " << vnew.size() << endl;
    // cout << "Capacity of vnew: " << vnew.capacity() << endl;

    // Creating new vector
    // vector<int> arr;
    // arr.push_back(69);
    // arr.push_back(43);
    // arr.push_back(14);
    // arr.push_back(443);

    // // Printing first value of vector that is 69
    // cout << arr[0] << endl;      // first method
    // cout << arr.front() << endl; // Second method

    // // Printing last value of vector that is 443
    // cout << arr[arr.size() - 1] << endl; // first method
    // cout << arr.back() << endl;          // Second method

    // // Copy value of 1 vector to another
    // vector<int> a;
    // a = arr;
    // // Printing value of vector using iterator
    // for (auto it = arr.begin(); it != arr.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }

    // cout<<endl;

    // // Printing value of vector
    // for (auto i: a)
    // {
    //     cout<<i<<" ";
    // }

    // Creating a new vector
    vector<int> ans;
    ans.push_back(18);
    ans.push_back(7);
    ans.push_back(45);
    ans.push_back(10);
    ans.push_back(17);
    ans.push_back(177);
    ans.push_back(27);

    // Printing vector value
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    // Sorting a vector in inreasing vector
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    // Sorting a vector in decreasing vector 1st method
    // sort(ans.begin(), ans.end(), greater<int>());
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    // // Sorting a vector in decreasing vector 2nd method
    // sort(ans.rbegin(),ans.rend());
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    // Search in Binary Search
    // Syntax: binary_search(ans.begin(),ans.end(), Target);
    // Print yes(1) if it is present otherwise no(0)
    cout << binary_search(ans.begin(), ans.end(), 1844) << endl; // 0
    cout << binary_search(ans.begin(), ans.end(), 18) << endl;   // 1

    // Searching paricular index
    cout << find(ans.begin(), ans.end(), 18) - ans.begin() << endl;  // 3
    cout << find(ans.begin(), ans.end(), 123) - ans.begin() << endl; // 7 because 123 is not present so last index + 1 , here 6 + 1 = 7


    // Home Work
    /*
    // sort
    1 : sort(v.begin(), v.end());
    2 : sort(v.begin(), v.end(), greater<int>());
    // search
    1 : bool found = binary_search(v.begin(), v.end(), 5);
    2 : auto it = find(v.begin(), v.end(), 6); // First occurance
    // count
    int count = count(v.begin(), v.end(), 5);
    // Max or min
    int maximum = max_element(v.begin(), v.end());
    //
    1: lower_bound(first_iterator, last_iterator, x)
    returns an iterator pointing to the first element
    in the range [first, last) which has a value
    not less than
    2: upper_bound(first_iterator, last_iterator, x)
    returns an iterator pointing to the first element
    in the range [first, last)
    which has a value greater than

    */
}