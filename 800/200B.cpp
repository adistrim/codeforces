#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double arr[n];

    double count = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        count += arr[i];
    }

    cout << setprecision(12) << count/n << endl;

    return 0;
}
