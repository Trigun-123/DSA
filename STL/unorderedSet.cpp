#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> st; // has better time complexity
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(12);
    st.insert(12);

    for(auto i : st)
        cout << i << " ";
    return 0;
}

// lower_bound and upper_bound cannot be applied because unordered_set will not be in sorted order