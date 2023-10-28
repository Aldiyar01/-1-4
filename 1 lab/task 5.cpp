#include <iostream>

int main() {
    using namespace std;

    int v, t;
    cin >> v >> t;

    int position = (v * t) % 109;
    if (position < 0) {
        position += 109;
    }

    cout << position << endl;

    return 0;
}