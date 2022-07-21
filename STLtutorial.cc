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

bool comp(int el1, int el2)
{
    if (el1 <= el2)
    {
        return true;
    }
    return false;
}

bool comp1(pair<int, int> el1, pair<int, int> el2)
{
    if (el1.first < el2.first)
    {
        return true;
    }
    if (el1.first == el2.second)
    {
        if (el1.second > el2.first)
        {
            return true;
        }
        return false;
    }
}

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

    // Day 3

    // Bitset
    // int -> 16 bits
    // char -> 8 bits
    // bitset -> 1 bit

    bitset<5> bt; // segmentation tree problems
    // only stores 1 or 0
    cin >> bt; // 10101
    // all, any, count, flip, none, set, reset, size, test

    cout << bt.all();   // return true or false -> all the bits are set(1) true else false
    cout << bt.any();   // if any one bit is set(1) returns true
    cout << bt.count(); // print number of set(1) bits
    bt.flip(2);         // it will flip the bit at index 2
    cout << bt.none();  // if none is set(1) returns true else false
    bt.set();           // entire set will become 1 1011 -> 1111
    bt.set(2);          // sets the index number of 2
    bt.set(2, 0);       // sets 2nd index with 0
    bt.reset();         // resets whole set to 0. same as bt.set() not bt.reset(2, 0)
    cout << bt.size();  // prints size of bit set
    cout << bt.test(2); // find particular index is set(1) or not

    // Sorting Algorithms
    // store in linear fashion -> array, vector
    int n = 5;
    int arrrr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter a number";
        cin >> arrrr[i];
    }
    sort(arrrr, arrrr + n); // in increasing order -> n log(n)

    vector<int> vecna(5, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vecna[i];
    }

    sort(vecna.begin(), vecna.end()); // u can write also merge sort

    // to reverse a array
    reverse(arrrr, arrrr + n); // reverse(startIterator, endIterator)
    reverse(vecna.begin(), vecna.begin() + 4);

    // to find the maximum elements in any index range
    int el = *max_element(arrrr, arrrr + n);
    int el = *max_element(vecna.begin(), vecna.end());
    // for minimum elements
    int ell = *min_element(arrrr, arrrr + n);
    int ell = *min_element(vecna.begin(), vecna.end());

    // find the sum of an range in that array
    // accumulate(startiterator, endIterator, initialSum);
    int sums = accumulate(arrrr, arrrr + n, 0);
    int sums = accumulate(vecna.begin(), vecna.end(), 0);

    // arr[] = [1, 6, 7, 1, 2, 1, 3]
    // x=1
    // how many times x occurs in the array
    // count(firstIterator, secondIterator, x)
    int cnt = count(arrrr, arrrr + n, 1);
    int cnt = count(vecna.begin(), vecna.end(), 1);

    // arr[] = {1, 2, 5, 1, 2, 4, 4}
    // find the first occurrence of 2
    auto ti = find(arrrr, arrrr, 2); // return an iterator
    // pointing to the first instance of ti, or else ti returns pointing to the end() if it is not there

    vector<int> vqwe(5, 0); // [2, 3, 7, 8, 1]
    // int p = 4;
    auto it = find(vqwe.begin(), vqwe.end(), 4);
    // it will point to the pointer after last element because it is not present

    // binary search
    // this stl only works on sorted arrays
    // arr[] = [1, 5, 7, 9, 10]
    // x = 9
    // true -> 9 exists
    // x = 9
    // false -> 8 does not exists

    // binary_search(firstIterator, lastIterator, x)
    // returns a true or false
    // works in log n complexity
    bool res = binary_search(arrrr, arrrr + n, 8);
    bool res = binary_search(vecna.begin(), vecna.end(), 8);

    // lower_bound function
    // returns an iterator pointing to the
    // first element which is not less than x
    // arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
    // x = 10 -> point to 10
    // x = 6 -> point to 7
    // x = 13 -> point to end of array
    // this works in log N, works in sorted arrays
    int x = 13;
    auto it = lower_bound(arrrr, arrrr + n, x);
    // ind = it - arrrr; -> return index

    auto itv = lower_bound(vecna.begin(), vecna.end(), x);
    // index can also be find by below method
    // auto itv = lower_bound(vecna.begin(), vecna.end(), x) - vecna.begin();
    // ind = itv - vec.begin(); -> returns index

    // upper bound
    // this returns an iterator which points to an element which is
    // just gretaer than x
    // arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
    // x = 7 -> points to 8
    // x = 6 -> points to 7
    // x = 12 -> points to end() of array
    // x = 15 -> points to end() of array
    int x = 13;
    auto it = upper_bound(arrrr, arrrr + n, x);
    // ind = it - arrrr; -> return index

    auto itv = upper_bound(vecna.begin(), vecna.end(), x);
    // index can also be find by below method
    // auto itv = upper_bound(vecna.begin(), vecna.end(), x) - vecna.begin();
    // ind = itv - vec.begin(); -> returns index

    // Q1. find the first index where the element X lies
    // There are many ways to solve it

    // 1st way
    if (binary_search(arrrr, arrrr + n, x) == true)
    {
        cout << lower_bound(arrrr, arrrr + n, x) - arrrr;
    }
    else
        cout << "does not exists!";

    // 2nd way
    int ind = lower_bound(arrrr, arrrr + n, x) - arrrr;
    if (ind != n && arr[ind] == x)
    {
        cout << " Found at: " << ind;
    }
    else
    {
        cout << "Not found!";
    }

    // Q2. Find me last occurences of x in an array
    // ar[] = [1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12]
    ///////////0  1  2  3  4  5   6   7   8   9   10

    // last occurence of x = 10, ans = 7th index
    int indi = upper_bound(arrrr, arrrr + n, x) - arrrr;
    ind -= 1;
    if (arrrr[ind] == x)
    {
        cout << "last occurence: " << ind;
    }
    else
    {
        cout << "Does not exists";
    }

    // Q3. Tell me the number of  times the x appears in arrary
    // ar[] = [1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12]
    ///////////0  1  2  3  4  5   6   7   8   9   10
    // x = 10, appears 3 times
    // x = 7, appears 2 times

    // Next permutation
    // string s = "abc"
    // all permutations are as follows:
    // -> abc
    // -> acb
    // -> bac
    // -> bca
    // -> cab
    // -> cba
    // time complexity O(n)

    string s = "bca";
    bool res = next_permutation(s.begin(), s.end()); // returns true, and string s stores next permutaion -> "cab"

    string s = "cba";
    bool res = next_permutation(s.begin(), s.end()); // returns false, and string s stores -> "cba"

    // given any random string s = "bca"
    // print all the permutations
    string s = "bca";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // Follow recuresive way in interview, STL in CP.

    // previous permutation
    bool res = prev_permutation(s.begin(), s.end());

    // Comparator
    sort(arrrr, arrrr+n); // sorts everything in ascending order

    //descending
    sort(arrrr, arrrr+n, comp);
    // greater<int> is an inbuilt comparator
    // which works only if we want to sort in descending
    // sort(arrrr, arrrr+n, greater<int>);
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

// [
//     Video Link 03: https://www.youtube.com/watch?v=AUPLWa6gbIQ
//     Timestamps: [
//         bitset: 6:07
//         sorting algorithm: 22:40
//         binary search: 58:22
//         lower bound: 1:02:20
//         upper bound: 1:09:55
//         next permutation: 1:36:15
//         previous permutation: 1:52:40
//         comparator: 1:55:41
//     ]
// ]