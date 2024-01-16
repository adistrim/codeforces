#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> letters;
    for (int i = 0; i < s.length(); i++) {
        letters.insert(s[i]);
    }

    if (letters.size()%2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
