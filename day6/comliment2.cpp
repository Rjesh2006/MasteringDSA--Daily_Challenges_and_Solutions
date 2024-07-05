#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the binary number (as an integer): ";
    cin >> n;

    // Edge case for n being 0
    if (n == 0) {
        cout << "The complement of 0 is 1." << endl;
        return 0;
    }

    int m = n; // Copy of n to manipulate for mask calculation
    int mask = 0;

    // Create a mask with the same number of bits as n
    while (m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    // Calculate the complement of n
    int ans = (~n) & mask;

    // Output the result
    cout << "The complement of the binary number is: " << ans << endl;

    return 0;
}
