#include <bits/stdc++.h>
using namespace std;

string reverse(string s) {
    for (int i = 0; i < s.length()/2; i++) {
        swap(s[i], s[s.length() - i - 1]);
    }

    return s;
}

int main() {
    string s, rs;
    cin >> s >> rs;

    s = reverse(s);

    if (rs == s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
