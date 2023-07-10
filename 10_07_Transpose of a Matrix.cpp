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
    int arr[n][n];
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    /* my approach [Mistake]:
    for(int j=0;j<n;j++){
        if(i!=j)...
    }

    Here, when iterating j from 0 to n in each row will result in no change as the swapped
    numbers will be reversed again ie, back to original position. Hence staring j from i+1
    is neccessary because when doing so the swapped numbers won't be touched.

    */

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int c = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = c;
        }
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
