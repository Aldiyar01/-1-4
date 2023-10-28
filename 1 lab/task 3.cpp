#include <iostream>

int main() {
    using namespace std;

    int N, K;
    cin >> N >> K;

    int applesPerStudent = K / N;
    cout << applesPerStudent << endl;

    return 0;
}