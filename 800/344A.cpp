#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 1;
    int maglist[n];

    for (int i = 0; i < n; i++) {
        cin >> maglist[i];
    }

    for (int i = 1; i < n; i++) {
        if (maglist[i] != maglist[i-1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
