#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i <= n-1; i++)
        cin >> nums[i];

    for(int i = n-1; i >= 1; i--) {
        int didSwap = 0;
        for(int j = 0; j <= i-1; j++) {
            if(nums[j] < nums[j+1]) {
                swap(nums[j], nums[j+1]);
                didSwap = 1;
            } 
        }
        if(didSwap == 0)
            break;
    }

    for(int i = 0; i <= n-1; i++)
        cout << nums[i] << " ";
    return 0;
}
