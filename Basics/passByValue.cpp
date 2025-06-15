#include<bits/stdc++.h>
using namespace std;

void passByValue(int x) {
    x = x + 10;
}    

int main() {
    int num = 5;
    passByValue(num);
    cout << num;
    return 0;
}