#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(0);

    cout << vec.size() << "\n";

    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << "\n";

    // iterator
    vector<int>::iterator beginItr = vec.begin(); // instead of vector<int>::iterator,we can use auto 
    vector<int>::iterator endItr = vec.end();
    
    for(vector<int>::iterator i = beginItr; i < endItr; i++)
        cout << *i << " ";
    cout << "\n";

    for(auto i : vec) // foreach Loop
        cout << i << " ";
    cout << "\n";

    // reverse iterator
    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend();

    for(auto i = reverseBegin; i < reverseEnd; i++)
        cout << *i << " ";
    cout << "\n";
    
    vector<int> duplicateVec(vec);
    for(auto i : duplicateVec)
        cout << i << " ";
    cout << "\n";

    cout << vec.front() << " " << vec.back() << "\n";

    vec.pop_back(); // deletes the last element
    for(auto i : vec)
        cout << i << " ";
    cout << "\n";

    vector<int> vec1;
    vec1.push_back(3);
    vec1.emplace_back(4);
    swap(vec, vec1);
    
    for(auto i : vec)
        cout << i << " ";
    cout << "\n";

    
    return 0;
}