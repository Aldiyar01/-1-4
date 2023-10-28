#include <iostream>

int main() {
    using namespace std;

    int k, m, n;
    cin >> k >> m >> n;

    int totalTime = ((n * 2 + k - 1) / k) * m;
    cout << totalTime << endl;

    return 0;
}