#include <iostream>
#include <vector>
using namespace std;

class Petrol_pup {
public:
    int petrol;
    int distance;

    Petrol_pup(int p1, int d1) {
        petrol = p1;
        distance = d1;
    }
};

class Solution {
public:
    int circular_truck(vector<Petrol_pup>& petrol_pumps, int n) {
        int balance = 0;
        int start = 0;
        int deficit = 0;

        for (int i = 0; i < n; i++) {
            balance += petrol_pumps[i].petrol - petrol_pumps[i].distance;
            if (balance < 0) {
                deficit += balance;
                start = i + 1;
                balance = 0;
            }
        }

        return (balance + deficit >= 0) ? start : -1;
    }
};

int main() {
    vector<Petrol_pup> petrol_pumps = {
        Petrol_pup(4, 6), 
        Petrol_pup(6, 5), 
        Petrol_pup(7, 3), 
        Petrol_pup(4, 5)
    };
    Solution s;

    int n = petrol_pumps.size();
    int result = s.circular_truck(petrol_pumps, n);

    if (result == -1) {
        cout << "No solution: The truck cannot complete the circle." << endl;
    } else {
        cout << "Starting point : Pump is at index -> " << result << "." << endl;
    }

    return 0;
}
