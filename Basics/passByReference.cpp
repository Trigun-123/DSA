#include<bits/stdc++.h>
using namespace std;

void passByReference(int &x) {
    x = x + 10;
}    

int main() {
    int num = 5;
    passByReference(num);
    cout << num;
    return 0;
}