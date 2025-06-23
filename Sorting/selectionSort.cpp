#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i <= n-1; i++)
        cin >> nums[i];

    for(int i = 0; i <= n-2; i++) {
        int maximum = i;
        for(int j = i; j <= n-1; j++) {
            if(nums[j] > nums[maximum])
                maximum = j;
        }
        swap(nums[maximum], nums[i]); 
    }

    for(int i = 0; i <= n-1; i++)
        cout << nums[i] << " ";
    return 0;
}
