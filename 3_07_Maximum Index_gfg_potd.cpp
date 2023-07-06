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

	int i = 0;
	int j = n - 1;
	int maxlen = 0;

	while (j >= i) {
		if (arr[i] <= arr[j]) {
			maxlen = max(maxlen, j - i);

			i++;
			j = n - 1;
		}
		else {
			j--;
		}
	}

	cout << maxlen;
	return 0;
}
