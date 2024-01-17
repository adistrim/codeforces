#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int Ucount = 0;
    int Lcount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            Ucount++;
        } else {
            Lcount++;
        }
    }

    if (Ucount > Lcount) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else if (Ucount < Lcount) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}
