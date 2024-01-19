#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int fd[n];
    int w = 0;
    for (int i = 0; i < n; i++) {
        cin >> fd[i];
        if (fd[i] > h) {
            w++;
        }
        w++;
    }

    cout << w << endl;

    return 0;
}
