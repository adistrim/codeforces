#include <bits/stdc++.h>

using namespace std;

vector<int> find_gift_givers(const vector<int>& pi) {
    int n = pi.size();
    vector<int> result(n + 1, 0); 

    for (int i = 0; i < n; ++i) {
        result[pi[i]] = i + 1; 
    }

    return vector<int>(result.begin() + 1, result.end());
}

int main() {
    int n;
    cin >> n;

    vector<int> pi(n);
    for (int i = 0; i < n; ++i) {
        cin >> pi[i];
    }

    vector<int> gift_givers = find_gift_givers(pi);

    for (int i = 0; i < n; ++i) {
        cout << gift_givers[i] << " ";
    }
    cout << endl;

    return 0;
}
