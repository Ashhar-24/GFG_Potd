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
	// 01-07-2023

	int N; cin >> N;

	int count = 0;

	while (N > 0) {
		int bit = N % 2;
		// cout << "+" << bit;
		if (bit == 1) {count++;}
		N = N / 2;
	}
	cout << count;

	return 0;
}