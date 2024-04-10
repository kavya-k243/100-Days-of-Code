#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {243,143,10,22,26,29};
	for (int i = 0; i < n; i++) {
		set<int>s;
		for (int j = 0; j < n; j++) {
			if (arr[j] < arr[i]) {
				s.insert(arr[j]);
			}
		}
		cout << s.size() + 1 << " ";
	}

}
