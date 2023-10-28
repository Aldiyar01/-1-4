#include <iostream>

int main() {
    using namespace std;

    int number;
    cin >> number;

    int nextNumber = number + 1;
    int prevNumber = number - 1;

    cout << "The next number for the number " << number << " is " << nextNumber << "." << endl;
    cout << "The previous number for the number " << number << " is " << prevNumber << "." << endl;

    return 0;
}