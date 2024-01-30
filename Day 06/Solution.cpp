#include <bits/stdc++.h>
using namespace std;

int Single(vector<int> &arr) {
    
    int n = arr.size();

    
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    vector<int> arr = {243, 1, 143, 1, 243};
    int ans = Single(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}