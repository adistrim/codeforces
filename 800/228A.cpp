#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n[4], count = 0;

    for (int i = 0; i < 4; i++) {
        cin >> n[i];
    }

    sort(n, n + 4);

    for (int i = 0; i < 3; i++) {
        if (n[i] == n[i + 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

// q: where the above code can fail?
// a: if the input is not sorted, then the code will fail.

// q: how? what will happen if the input is not sorted?
// a: if the input is not sorted, then the code will not be able to compare the adjacent elements and count the number of pairs.

// q: ok got it! Thanks!
// a: You're welcome! :)