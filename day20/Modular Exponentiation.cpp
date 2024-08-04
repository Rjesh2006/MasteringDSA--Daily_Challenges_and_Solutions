#include<iostream>
using namespace std;

// Function to perform Modular Exponentiation
// It returns (x^n) % m
int modularExponential(int x, int n, int m) {
    int res = 1;  // Initialize result

    while (n > 0) {
        // If n is odd, multiply x with the result
        if (n & 1) {
            res = (static_cast<long long>(res) * x % m) % m;
        }

        // n must be even now
        x = (static_cast<long long>(x) * x % m) % m;  // Change x to x^2
        n = n >> 1;  // Divide n by 2
    }

    return res;
}

int main() {
    int x, n, m;

    // Input: base x, exponent n, and modulus m
    cout << "Enter x: ";
    cin >> x;
    cout << endl;

    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    cout << "Enter m: ";
    cin >> m;
    cout << endl;

    // Calculate modular exponentiation
    int ans = modularExponential(x, n, m);

    // Output the result
    cout << "Here is your answer for the given inputs: " << ans << endl;

    return 0;
}
