#include <iostream>
#include <string>
using namespace std;

void bit_counter(const string& binary_str) {
    int count = 0;
    for (char bit : binary_str) {
        if (bit == '1') {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    string binary_str;
    cout << "Enter the binary number here: ";
    cin >> binary_str;
    bit_counter(binary_str);

    return 0;
}
