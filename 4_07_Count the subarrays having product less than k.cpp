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

	int count = 0;
	int i = 0, j = 0;
	long long prod = 1;  // always take product to be long long

	while (j < n) {

		// starting from index 0 and calculating product
		prod *= arr[j];

		// if prod>=k => Dividing the answer by arr[i] and incrementing i by 1
		// because for getting all possible answers we must check for all possible sub arrays

		while (prod >= k && i <= j) {
			prod /= arr[i];
			i++;
		}

		// counting the no of sub arrays
		count += j - i + 1;
		j++;

	}

	cout << count;
	return 0;
}
