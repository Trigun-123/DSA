#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls = {6, 7};
    ls.push_front(1);
    for(auto it : ls)
        cout << it << " ";
    return 0;
} 

// underlying data structure for vector is array
// underlying data structure for list and deque is linked list