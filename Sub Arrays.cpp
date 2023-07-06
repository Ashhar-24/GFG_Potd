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

	int n, k;
	cin >> n >> k;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// brute force approach to get the no of sub arrays with product <=k. [O(n3)]

	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int prod = 1;
			for (int k = i; k <= j; k++) {
				cout << arr[k] << " ";
				prod *= arr[k];
			}
			if (prod <= k) {
				count++;
			}
			cout << '\n';
		}
		cout << '\n';

	}

	// remove comments to get all the possible sub-arrays. [contiguous elements: sub array]

	cout << count;

	return 0;
}