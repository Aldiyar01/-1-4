#include <iostream>

int main() {
    using namespace std;

    int number;
    cin >> number;

    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    int sum = digit1 + digit2 + digit3;
    cout << sum << endl;

    return 0;
}