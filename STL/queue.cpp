#include<bits/stdc++.h>
using namespace std;

int main() {
    // FIFO
    queue<int> q;
    q.push(2);
    q.push(22);
    q.push(23);
    q.push(24);
    
    while(q.empty() == false) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
} 