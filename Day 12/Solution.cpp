
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; 

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
          
            sum += arr[j];

            maxi = max(maxi, sum); 
        }
    }

    return maxi;
}

int main()
{
    int arr[] = { 9,12,6, 1, -3, 24, -8, 22, 1, -15, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
