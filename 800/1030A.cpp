#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lst[n];

    for (int i = 0; i < n; i++) {
        cin >> lst[i];

        if (lst[i] == 1) {
            cout << "HARD" << endl;
            
            return 0;
        }
    }

    cout << "EASY" << endl;

    return 0;
}
