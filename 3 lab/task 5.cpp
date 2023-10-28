#include <iostream>

int main() {
    using namespace std;

    int N;
    cin >> N;

    int sum = 0;
    int currentTerm = 1;
    for (int i = 1; i <= N; ++i) {
        sum += currentTerm;
        currentTerm *= 2;
    }

    cout << sum << endl;

    return 0;
}