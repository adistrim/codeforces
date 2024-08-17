#include <cctype>
#include <iostream>
#include <set>

using namespace std;

int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int> stringStore;

    for (int i = 0; i < s.length(); i++) {
        stringStore.insert(tolower(s[i]));
    }

    if (stringStore.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
