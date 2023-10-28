#include <iostream>

int main() {
    using namespace std;

    int a, b, c;
    cin >> a >> b >> c;

    int maxNumber = a;
    if (b > maxNumber) {
        maxNumber = b;
    }
    if (c > maxNumber) {
        maxNumber = c;
    }

    cout << maxNumber << endl;

    return 0;
}