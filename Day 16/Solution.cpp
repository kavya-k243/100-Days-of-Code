


#include <bits/stdc++.h>
using namespace std;

int longest(vector<int>&a) {
    int n = a.size();
    if (n == 0) return 0;

    
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lastSmaller) {
         
            cnt += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;

}

int main()
{
    vector<int> a = {3, 243, 10, 22, 143, 14};
    int ans = longest(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
