#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int Aexit[n];
    int Benter[n];
    int m = 0;
    int mMax = 0;
    for (int i = 0; i < n; i++) {
        cin >> Aexit[i] >> Benter[i];
        m -= Aexit[i];
        m += Benter[i];
        mMax = max(m, mMax);
    }

    cout << mMax << endl;

    return 0;
}
