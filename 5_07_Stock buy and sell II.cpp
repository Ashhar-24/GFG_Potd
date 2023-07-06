#include <bits/stdc++.h>
using namespace std;

void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int buy = -1;
	int profit = 0;
	int  i = 0;

	while (i < n ) {

		if (buy == -1) {
			buy = arr[i];
		}

		while (i < n - 1 && arr[i + 1] > arr[i]) {
			i++;
		}
		profit += arr[i] - buy;
		// cout << "+" << profit;
		buy = -1;
		i++;
	}

	cout << "+" << profit;

	return 0;
}