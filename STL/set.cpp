#include<bits/stdc++.h>
using namespace std;

int main() {
    // stores unique elements in ascending order
    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(21);
    st.insert(21);
    st.insert(12);

    for(auto it : st)
        cout << it << " ";
    cout << "\n";
    
    auto it = st.find(21);
    if(it != st.end())
        cout << *it;
    cout << "\n";

    cout << st.count(21) << "\n"; // returns 1 if element is present

    // lower_bound -> returns an iterator that points to an element that is >= number given
    auto i = st.lower_bound(12);
    cout << *i << "\n";

    // upper_bound -> returns an iterator that points to an element that is > number given
    auto j = st.upper_bound(12);
    cout << *j << "\n";
    return 0;
} 