#include <iostream>
using namespace std;

int main() {
    int n, largest = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0) {
        remainder = n % 10;
        if (remainder > largest) {
            largest = remainder;
        }
        n /= 10;
    }
    cout << "Largest digit = " << largest << endl;
    return 0;
}