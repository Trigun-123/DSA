#include<bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mpp;
    mpp.insert({1, "abc"});
    mpp.insert({2, "bcd"});
    mpp.insert({3, "cat"});
    mpp.insert({1, "abc"});
    mpp.insert({1, "bac"});

    for(auto it : mpp)
        cout << it.first << "->" << it.second << "\n";

    auto it = mpp.equal_range(1);
    for(auto i = it.first; i != it.second; i++)
        cout << (*i).first << "->" << (*i).second << "\n";
    return 0;
}