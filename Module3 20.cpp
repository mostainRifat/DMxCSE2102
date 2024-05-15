#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int x, y;
    cout << "Enter two positive integers: ";
    cin >> x >> y;

    int result = gcd(x, y);
    cout << "GCD of " << x << " & " << y << " is " << result << endl;

    return 0;
}
