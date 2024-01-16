#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        char &c = s1[i];
        char &d = s2[i];
        c = tolower(c);
        d = tolower(d);
    }

    if (s1 > s2) {
        cout << 1 << endl;
    } else if (s1 < s2) {
        cout << -1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
