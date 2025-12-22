#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> pr1 = {2, 8};
    cout << pr1.first << " " << pr1.second << "\n"; //2 8

    pair<int, char> pr2 = {2, 'b'};
    cout << pr2.first << " " << pr2.second << "\n"; //2 b 

    pair<pair<int, char>, int> pr3 = {{4, 'h'}, 8};
    cout << pr3.first.first << " " << pr3.first.second << " " << pr3.second; //4 h 8
    return 0;
}