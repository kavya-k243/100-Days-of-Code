#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    int MaxeOnes(vector < int > & nums) {
      int cnt = 0;
      int maxi = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
          cnt++;
        } else {
          cnt = 0;
        }

        maxi = max(maxi, cnt);
      }
      return maxi;
    }
};

int main() {
  vector < int > nums = { 1,1,1,1,1,1, 1, 0, 1, 1, 1 };
  Solution obj;
  int ans = obj.MaxeOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}