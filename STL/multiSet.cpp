#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);

    for(auto i : ms)
        cout << i << " ";
    cout << "\n";
    
    cout << ms.count(1);
    return 0;
}