#include <iostream>
#include <cmath> 

int main() {
    int a, b;
    std::cin >> a >> b; 

    double c = sqrt(a * a + b * b);

    std::cout << c << std::endl;

    return 0;
}