#include<bits/stdc++.h>
using namespace std;

void explainSort() {
    int arr[5] = {6, 2, 1, 7, 8};
    sort(arr, arr+5);
    for(int i = 0; i <= 4; i++)
        cout << arr[i] << " ";
    cout << "\n";

    vector<int> vec = {5, 7, 1, 0, 1};
    sort(vec.begin(), vec.end());
    for(auto it : vec)
        cout << it << " ";
    cout << "\n";
}

void explainAccumulate() {
    int arr[5] = {6, 2, 1, 7, 8};
    cout << accumulate(arr, arr+5, 0) << "\n";
}

void explainCount() {
    int arr[5] = {6, 2, 2, 7, 8};
    cout << count(arr, arr+5, 2) << "\n";
}

void explainNextPermutation() {
    string str = "abc";
    do {
        cout << str << "\n";
    } while(next_permutation(str.begin(), str.end()));
}

void explainPrevPermutation() {
    string str = "bac";
    do {
        cout << str << "\n";
    } while(prev_permutation(str.begin(), str.end()));
}

void explainMaxElement() {
    int arr[5] = {6, 2, 1, 7, 8};
    auto it = max_element(arr, arr+5);
    cout << *it << "\n";
}

void explainMinElement() {
    int arr[5] = {6, 2, 1, 7, 8};
    auto it = min_element(arr, arr+5);
    cout << *it << "\n";
}

void explainReverse() {
    int arr[5] = {6, 2, 1, 7, 8};
    reverse(arr, arr+5);
    for(int i = 0; i <= 4; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

bool internalComparator(int ele1, int ele2) {
    if(ele1 < ele2)
        return false;
    return true;
}

void explainComparator() {
    int arr[5] = {6, 2, 1, 7, 8};
    sort(arr, arr+5, internalComparator);
    for(int i = 0; i <= 4; i++)
        cout << arr[i] << " ";
}

int main() {
    explainSort();
    explainAccumulate();
    explainCount();
    explainNextPermutation();
    explainPrevPermutation();
    explainMaxElement();
    explainMinElement();
    explainReverse();
    explainComparator();
    return 0;
}