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

	//02-07-2023

	int x, y;
	cin >> x >> y;

	int l, r;
	cin >> l >> r;

	// changing x to binary
	string s1;
	while (x > 0) {
		int a = x % 2;
		s1 = to_string(a) + s1;
		x = x / 2;
	}

	// changing y to binary
	string s2;
	while (y > 0) {
		int a = y % 2;
		s2 = to_string(a) + s2;
		y = y / 2;
	}


	// making the size of both string equal
	if (s1.size() > s2.size()) {
		int n = s1.size() - s2.size();
		for (int i = 0; i < n; i++) {
			s2 = to_string(0) + s2;
		}
	}

	else if (s1.size() < s2.size()) {
		int n = s2.size() - s1.size();
		for (int i = 0; i < n; i++) {
			s1 = to_string(0) + s1;
		}
	}

	cout << s1 << endl;
	cout << s2;

	int m = s2.size();
	int n = min(r, m);
	int range = s2.size() - n;


	for (int i = s2.size() - l; i >= range; i--) {
		if (s2[i] == '1') {
			// cout << "+" << s2[i];
			s1[i] = s2[i];
		}
	}

	cout << '\n' << s1 << '\n';


	// converting to int
	int ans = 0;
	for (int i = s1.size() - 1; i >= 0; i--) {
		int n = int(pow(2, s1.size() - 1 - i));
		int m = (s1[i] - '0');
		ans = ans + (n * m);
	}

	cout << "+ " << ans;

	return 0;
}
