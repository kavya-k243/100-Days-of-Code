
#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == k) {
            first = mid;
           
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
       
        if (arr[mid] == k) {
            last = mid;
            
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, n, k);
    if (first == -1) return { -1, -1};
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}


int main()
{
    vector<int> arr =  {82, 54, 76, 18, 18, 18, 211, 313};
    int n = 8, k = 18;
    pair<int, int> ans = firstAndLastPosition(arr, n, k);
    cout << "The first and last positions are: "
         << ans.first << " " << ans.second << "\n";
    return 0;
}
