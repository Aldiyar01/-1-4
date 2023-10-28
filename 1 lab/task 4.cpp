#include <iostream>

int main() {
    using namespace std;

    int N, K;
    cin >> N >> K;

    int remainingApples = K % N;
    cout << remainingApples << endl;

    return 0;
}