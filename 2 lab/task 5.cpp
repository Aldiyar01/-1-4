#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}