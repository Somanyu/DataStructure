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

    vector<int> vec1(4, 0); // {0, 0, 0, 0}
    vector<int> vec2(4, 18); // {18, 18, 18, 18}
    // we can still push_back
    vec1.push_back(5);
    vec1.push_back(90);
    vec1.push_back(33);
    cout << vec1.size() << endl;

    // insert all elements of vec2 into vec3 or make a copy of vec2
    vector<int> vec3(vec2.begin(), vec2.end()); 
    // also copy the entire vec2 into vec3 
    //vector<int> vec3(vec2);

    vector<int> raj;
    raj.push_back(1); // also raj.emplace_back(1) -> emplace_back() takes lesser time than push_back()
    raj.push_back(2);
    raj.push_back(3);
    raj.push_back(5); // {1, 2, 3, 5}

    // we want only {1,2}
    vector<int> raja(raj.begin(), raj.begin() + 2);

    // similar functions as array -> begin(), end(), rbegin(), rend()

    // to define 2D vectors
    vector<vector <int>> vector2D; // {}

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
    for(auto vect: vector2D){
        for(auto innerVect: vect) {
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
    vector<vector<int>> veca(10, vector<int> (20, 0));

    vector<int> arr8[4]; // [vector, vector, vector, vector]
    arr8[0].push_back(2);

    
    // 3D Vectors
    // Define 10x20x30 vector
    // vector<vector<vector<int>>> vector3D(10, vector<vector<int>> vector3D(20, vector<int> (30, 0))); 

    

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