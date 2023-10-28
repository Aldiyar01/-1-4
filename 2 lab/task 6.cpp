#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    int k;
    cin >> k;

    int side = sqrt(k);
    if (side * side == k) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}