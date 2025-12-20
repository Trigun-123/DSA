#include<bits/stdc++.h>
using namespace std;

int main() {
    //-10^9 to 10^9
    int num = 10;
    cout << num << "\n"; //10

    //-10^12 to 10^12
    long numlong = 1234454545;
    cout << numlong << "\n"; //1234454545
    
    //-10^18 to 10^18
    long long numlonglong = 1234567891234567891;
    cout << numlonglong << "\n"; //1234567891234567891

    //7 decimal places
    float number = 10.1234;
    cout << number << "\n"; //10.1234 

    double numdouble = 10.1239;
    cout << numdouble << "\n"; //10.1239

    char ch = 't';
    cout << ch << "\n"; //t

    string s;
    getline(cin, s);
    cout << s; 
    return 0;
}