#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> mpp;
    mpp[1] = "abc";
    mpp[2] = "bcd";
    mpp[3] = "cat";
    mpp.insert({4, "Trigun"});

    for(auto it : mpp)
        cout << it.first << "->" << it.second << "\n";
    return 0;
}