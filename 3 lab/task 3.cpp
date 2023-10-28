#include <iostream>

int main() {
    using namespace std;

    int n, k;
    cin >> n >> k;

    int result = 1;
    for (int i = 1; i <= k; ++i) {
        result = result * (n - i + 1) / i;
    }

    cout << result << endl;

    return 0;
}