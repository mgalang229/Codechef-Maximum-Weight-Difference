#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> w(n);
		int sum = 0;
		// calculate the total sum
		for (int i = 0; i < n; i++) {
			cin >> w[i];
			sum += w[i];
		}
		// sort the vector in non-decreasing order
		sort(w.begin(), w.end());
		int sum1 = 0;
		// get the sum of the first 'k' elements
		for (int i = 0; i < k; i++) {
			sum1 += w[i];
		}
		int sum2 = 0;
		// sort the vector in non-increasing order
		sort(w.rbegin(), w.rend());
		// get the sum of the last 'k' elements
		for (int i = 0; i < k; i++) {
			sum2 += w[i];
		}
		// find out the maximum value from the difference between the 
		// first 'k' elements and the total sum, and the last 'k elements
		// and the total sum as well (applying greedy algorithm)
		cout << max(abs(sum1 - (sum - sum1)), abs(sum2 - (sum - sum2))) << '\n';
	}
	return 0;
}
