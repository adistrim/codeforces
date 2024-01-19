#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool checkDistant (int n) {
    string s = to_string(n);
    unordered_set<char> set;
    for (int i = 0; i < s.length(); i++) {
        char digit = s[i];
        if (!set.insert(digit).second) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;

    while (true) {
        n++;
        if (checkDistant(n)) {
            break;
        }
    }

    cout << n << endl;

    return 0;
}
