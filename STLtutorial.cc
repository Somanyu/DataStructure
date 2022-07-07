#include <bits/stdc++.h>
using namespace std;

struct node
{
    string str;
    int num;
    double doub;

    // Constructor
    node(string str_, int num_, double doub_)
    {
        str = str_;
        num = num_;
        doub = doub_;
    }
};

namespace raj
{
    int val = 50;
    int getVal()
    {
        return val * 10;
    }
} // namespace raj

array<int, 3> arr; // {0, 0, 0}

// Global array declaration
// int arrma[10000000]; // max size of array 10^7 (int, double, char)
// bool arrmax[100000000]; // max size of bool datatype array 10^8 (bool)

int main()
{
    // int arrma[1000000];  // max size of array 10^6 (int, double, char)
    // bool arrmax[10000000]; // max size of bool datatype array 10^7 (bool)

    double val = 10.0;
    cout << val << endl;
    cout << raj::getVal() << endl;

    // correct but not best practise to define
    // node raj;
    // raj.str = "striver";
    // raj.num = 79;
    // raj.doub = 91.0;

    // defined using constructor
    node a("striver", 79, 10.0);
    node *b = new node("striver", 79, 10.0);
    node c = node("striver", 79, 10.0);

    array<int, 3> arr; // { Garbage Values, Garbage Values, Garbage Values }

    array<int, 5> arr1 = {1, 2, 3}; // {1, 2, 3, 0, 0}

    array<int, 4> arr2;
    arr2.fill(5); // Fills all the index with "5" -> {5, 5, 5, 5, 5}
    arr2.at(3);   // Returns value at index "3"

    array<int, 4> arr3 = {67, 56, 33, 89};
    for (int i = 0; i < 4; i++)
    {
        cout << arr3.at(i) << " ";
    }

    cout << "\n";

    // Iterators -> begin(), end(), rbegin(), rend()
    array<int, 5> arr4 = {1, 3, 5, 6, 3};
    for (auto it = arr4.begin(); it != arr4.end(); it++) // arr4.begin() & arr4.end() points to a pointer
    {
        cout << *it << " ";
    }

    cout << "\n";

    // reverse prints the array
    for (auto it = arr4.rbegin(); it != arr4.rend(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n";

    array<int, 4> arr5 = {23, 55, 90, 4};
    // for each loop
    for (auto it : arr5)
    { // iterates over the element
        cout << it << " ";
    }

    cout << "\n";

    // for each loop for string
    string s = "qwerty";
    for (auto c : s)
    {
        cout << c << " ";
    }

    cout << "\n";

    // other functions
    // size
    cout << arr5.size() << endl;

    // front
    cout << arr5.front() << endl; // also arr.at(0);

    // back
    cout << arr5.back() << endl;
    // also
    cout << arr5.at(arr5.size() - 1) << endl;

    // Vector
    vector<int> arr7; // {} -> empty array/vector is created
    cout << arr7.size() << endl;

    arr7.push_back(0); // {0}
    arr7.push_back(2); // {0, 2} -> dynamically increasing
    cout << arr7.size() << endl;

    arr7.pop_back(); // {0} -> pops the last element
    cout << arr7.size() << endl;

    // segmentation fault if we push_back 10^7 times

    arr7.clear(); // {} -> removes all elements at once

    vector<int> vec1(4, 0);  // {0, 0, 0, 0}
    vector<int> vec2(4, 18); // {18, 18, 18, 18}
    // we can still push_back
    vec1.push_back(5);
    vec1.push_back(90);
    vec1.push_back(33);
    cout << vec1.size() << endl;

    // insert all elements of vec2 into vec3 or make a copy of vec2
    vector<int> vec3(vec2.begin(), vec2.end());
    // also copy the entire vec2 into vec3
    // vector<int> vec3(vec2);

    vector<int> raj;
    raj.push_back(1); // also raj.emplace_back(1) -> emplace_back() takes lesser time than push_back()
    raj.push_back(2);
    raj.push_back(3);
    raj.push_back(5); // {1, 2, 3, 5}

    // we want only {1,2}
    vector<int> raja(raj.begin(), raj.begin() + 2);

    // similar functions as array -> begin(), end(), rbegin(), rend()

    // to define 2D vectors
    vector<vector<int>> vector2D; // {}

    vector<int> raj1;
    raj1.push_back(1);
    raj1.push_back(2); // {1, 2}

    vector<int> raj2;
    raj2.push_back(10);
    raj2.push_back(20); // {10, 20}

    vector<int> raj3;
    raj3.push_back(77);
    raj3.push_back(22);
    raj3.push_back(2);
    raj3.push_back(65); // {77, 22, 2, 65}

    vector2D.push_back(raj1); // { {1,2} }
    vector2D.push_back(raj2); // { {1,2}, {10,20} }
    vector2D.push_back(raj3); // { {1,2}, {10,20}, {77,22,2,65} } -> able to dynamically increase or decrease independently
    cout << vector2D.size() << endl;

    // vect is outer vector, innerVect is inner vector
    for (auto vect : vector2D)
    {
        for (auto innerVect : vect)
        {
            cout << innerVect << " ";
        }
    }

    cout << vector2D[2][3] << endl;

    // traditional way
    for (int i = 0; i < vector2D.size(); i++)
    {
        for (int j = 0; j < vector2D[i].size(); j++)
        {
            cout << vector2D[i][j] << " ";
        }
        cout << endl;
    }

    // define 10x20 vector
    vector<vector<int>> veca(10, vector<int>(20, 0));

    vector<int> arr8[4]; // [vector, vector, vector, vector]
    arr8[0].push_back(2);

    cout << "\n";

    // 3D Vectors
    // Define 1x2x3 vector
    vector<vector<vector<int>>> vector3D(1, vector<vector<int>>(2, vector<int>(3, 1)));
    for (auto a : vector3D)
    {
        for (auto b : a)
        {
            for (auto c : b)
            {
                cout << c << " ";
            }
        }
    }

    // 2nd Video

    // set
    int arr9[] = {2, 5, 2, 1, 5}; // 3 unique elements -> {1, 2, 5}
    // array<int, 4> arr9 = {67, 56, 33, 89};
    // cout << "to check begin()" << *arr9.begin() << endl;

    set<int> st; // stores all elements in increasing order, can't access via st[0], st[1]
    int n;
    cout << "Enter numbre of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the elements: ";
        cin >> x;
        st.insert(x); // (log n) times
        cout << *st.begin() + i << " ";
    }

    // erase functionality
    // st -> {1, 2, 5}
    // log n
    st.erase(st.begin()); // st.erase(index number) -> {2,5}

    // erase a range of elements
    // log n
    st.erase(st.begin(), st.end()); // st.erase(startIterator, endIterator)

    st.erase(5); // st.erase(value) -> deletes the value from set

    // same things in vectors can be implemented in set
    set<int> st1 = {1, 3, 4, 5};
    st.find(7); // returns the index number of 7 in set (log n)
    st.find(9); // doesn't exists, points to st.end() which is garbage value

    st.emplace(6); // same as st.insert(6) (faster)

    cout << st.size() << endl;

    set<node> stn; // set of anything can be defined

    // Unordered Set
    unordered_set<int> ust;
    ust.insert(2);
    ust.insert(3);
    ust.insert(4); // the elements can be in random order, doesn't follow ascending or descending
    // operations are same as ordered set
    // average time complexity is O(1)
    // worst case is linear, O(set size)
    // tle -> switch to set
    // 1st preference will be unordered set

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2); // ms.emplace(3)
    ms.insert(3); // {1, 1, 2, 2, 3} -> Stores everything in ordered manner

    ms.erase(2); // all the indexes with value 2 will be removed

    ms.count(2); // returns the number of occurences of a value;

    auto it = ms.find(2); // returns an index of the first value present
    ms.clear();           // deletes the entire set
    // All functions are similar to ordered set and unordered set, ordered manner and no uniqness
    // log n

    map<string, int> mpp; // log n
    mpp["raj"] = 27;
    mpp["hima"] = 31;
    mpp["sandeep"] = 67;
    mpp["tank"] = 89; // similar to dictionary, key->value pair
    // it stores everything in sorted way, always sorted according to key
    // map only stores unique keys
    // it will override if same key is there with different value
    mpp["suri"] = 63;
    mpp.emplace("suri", 63); // same as above, slight quicker
    mpp.erase("raj");        // removes the key
    mpp.clear();             // clears the entire map

    if (mpp.empty())
    {
        cout << "Yes, it's empty;";
    }

    mpp.count("raj"); // always returns 1 as it stores only 1
    // we can have same value to different keys

    // print key, value of map
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // using iterators
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    auto its = mpp.find("simran"); // points to the end since it doesn't exist.

    unordered_map<int, int> umpp;
    // all the functions are same as ordered map
    // O(1) in almost cases
    // O(n) in the worst cases

    // Pair class
    pair<int, int> pr = {1, 2}; // single element
    pair<pair<int, int>, int> pr1 = {{1, 2}, 2};
    cout << pr1.first.second; // 2

    pair<pair<int, int>, pair<int, int>> pr3 = {{1, 2}, {2, 3}};
    cout << pr3.first.first;   // 1
    cout << pr3.second.second; // 3

    vector<pair<int, int>> vecpr;
    set<pair<int, int>> stpr;
    map<pair<int, int>, int> mppr;
    // unordered_map<pair<int, int>, int> umpr; // you can't define pair inside unordered pair

    multimap<string, int> mmp;
    mpp.emplace('raj', 2);
    mpp.emplace('raj', 4);
    // functions will be same as map

    // Stack & Queues
    stack<int> sta; // last in first out
    // functions -> pop, push(emplace), top, size, empty

    sta.push(2);  //[2]
    sta.push(4);  //[2, 4]
    sta.push(10); //[2, 4, 10]
    sta.push(64); //[2, 4, 10, 64]

    cout << sta.top(); // prints 64
    sta.pop();         // removes the top element

    bool flag = sta.empty(); // returns true if stack is empty else false
    // to clear the entire stack at once
    while (!sta.empty())
    {
        sta.pop();
    }

    cout << sta.size() << endl; // number of elements in stack;

    // Queues -> first in first out
    queue<int> qu;
    // operations -> push, front, pop, size, empty -> O(1)
    qu.push(1);  // [1]
    qu.push(45); // [1,45]
    qu.push(66); // [1,45,66]
    qu.push(21); // [1,45,66,21]

    cout << qu.front(); // 1
    qu.pop();

    bool flag = qu.empty();

    // priority queue
    priority_queue<int> pqu; // sorted order(max element at top) and operations in log(n)
    // operation -> push, size, top, pop, empty
    pqu.push(1);
    pqu.push(7);
    pqu.push(3);
    pqu.push(6); // [1,3,6,7]

    cout << pqu.top(); // prints 7
    pqu.pop();         // removes 7
    cout << pqu.top(); // prints 6

    // to store descending order
    priority_queue<int> pqu2;
    pqu2.push(-1);
    pqu2.push(-7);
    pqu2.push(-3);
    pqu2.push(-6);

    cout << -1 * pqu2.top() << endl; // prints top

    // minimum priority queue
    priority_queue<int, vector<int, greater<int>>> mpq;
    mpq.push(1);
    mpq.push(7);
    mpq.push(3);
    mpq.push(6); // [7,6,3,1]

    cout << mpq.top() << endl; // prints 1

    // Dequeue
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(3);
    dq.pop_front();
    dq.pop_back();
    dq.begin();
    dq.end();
    dq.rbegin();
    dq.rend();
    dq.size();
    dq.clear();
    dq.empty();
    dq.at(3);

    list<int> ls; // similar operation as dequeue
                  // remove() -> O(1)

    /*
     * given N elements, print the elements that occurs maximum number of times
     * input - 1 3 3 3 2
     * output- 3
     */

    int n = 5;
    map<int, int> mpw;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mpw[x]++;
        if (mpw[x] > mpw[maxi])
        {
            maxi = x;
        }
    }
    cout << "max element - " << maxi << endl;

    /*
     * Given N elements, print all elements in sorted order
     * input - 6 6 3 2 3 5
     * output - 2 3 3 5 6 6
     */
    int n = 6;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    for (auto it : ms)
    {
        cout << it << " ";
    }
}

// [
//     Video Link 01: https://www.youtube.com/watch?v=iOOzYwBeXIM
//     Timestamps: [
//         libraries: 6:20
//         namespace: 8:30
//         struct: 14:25
//         arrays: 22:14
//         iterators: 29:50
//         vector: 49:20
//         2D vectors: 1:06:31
//         3D vectors: 1:16:49
//     ]
// ]

// [
//     Video Link 02: https://www.youtube.com/watch?v=koO01HI1Xto
//     Timestamps: [
//         ordered set: 8:50
//         unordered set: 28:02
//         multi-set: 34:55
//         ordered map: 42:00
//         unordered map: 58:20
//         pair class: 59:33
//         multi-map: 1:04:50
//         stack and queues: 1:06:35
//         queues: 1:15:37
//         priority queue: 1:19:44
//         dequeue: 1:33:52
//         list: 1:37:13
//     ]
// ]