#include<bits/stdc++.h>
using namespace std;

int main() {
    // LIFO
    stack<int> st;
    st.push(1);
    st.push(7);
    st.push(71);
    st.push(73);
    st.push(17);

    cout << st.size() << "\n";

    while(st.empty() == false) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
} 