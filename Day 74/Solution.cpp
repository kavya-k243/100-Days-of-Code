#include<bits/stdc++.h>

using namespace std;

vector < int > maxSlidingWindow(vector < int > & nums, int k) {
  deque < int > dq;
  vector < int > ans;
  for (int i = 0; i < nums.size(); i++) {
    if (!dq.empty() && dq.front() == i - k) dq.pop_front();

    while (!dq.empty() && nums[dq.back()] < nums[i])
      dq.pop_back();

    dq.push_back(i);
    if (i >= k - 1) ans.push_back(nums[dq.front()]);
  }
  return ans;
}
int main() {
  int i, j, n, k = 3, x;
  vector < int > arr {41,10,-11,13,15,13,16,18};
  vector < int > ans;
  ans = maxSlidingWindow(arr, k);
  cout << "Maximum element in every " << k << " window " << endl;
  for (i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
  return 0;
}