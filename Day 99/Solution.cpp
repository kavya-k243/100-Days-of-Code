#include<bits/stdc++.h>

using namespace std;

vector < int > maxXorQueries(vector < int > & arr, vector < vector 
< int >> & queries) {
  int n = arr.size();
  int m = queries.size();
  vector < int > ans(m, -1);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[j] <= queries[i][1]) {
        ans[i] = max(ans[i], arr[j] ^ queries[i][0]);
      }
    }
  }
  return ans;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector < int > arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    vector < vector < int >> queries;

    for (int i = 0; i < m; i++) {
      vector < int > temp;
      int xi, ai;
      cin >> xi >> ai;
      temp.push_back(xi);
      temp.push_back(ai);
      queries.push_back(temp);
    }

    vector < int > ans = maxXorQueries(arr, queries);
    for (int j = 0; j < ans.size(); j++) {
      cout << ans[j] << " ";
    }
    cout << endl;
  }

}