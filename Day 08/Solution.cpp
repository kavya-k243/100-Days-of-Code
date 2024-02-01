#include <bits/stdc++.h>
using namespace std;

int Subarray(vector<int>& a, int k) {
    int n = a.size(); 

    int len = 0;
    for (int i = 0; i < n; i++) { 
        int s = 0;
        for (int j = i; j < n; j++) { 
           
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{
    vector<int> a = { -1, 1,-1,1,1};
    int k = 1;
    int len = Subarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
