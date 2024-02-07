
#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    int n = A.size(); 

   
    int ind = -1; 
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            
            ind = i;
            break;
        }
    }

    
    if (ind == -1) {
        
        reverse(A.begin(), A.end());
        return A;
    }

 

    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }

    
    reverse(A.begin() + ind + 1, A.end());

    return A;
}

int main()
{
    vector<int> A = {22, 1, 15, 4, 13, 20, 10};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]n";
    return 0;
}
