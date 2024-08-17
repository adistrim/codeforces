#include <iostream>
#include <set>
using namespace std;

int main() {

    int n;
    cin >> n;
    set<int> levels;

    int q,y;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        levels.insert(x);
    }

    cin >> y;
    for (int i = 0; i < y; i++) {
        int x;
        cin >> x;
        levels.insert(x);
    }

    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
