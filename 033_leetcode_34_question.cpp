#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 4, 5, 6, 6, 7, 7};
    int s = sizeof(arr) / sizeof(arr[0]);

    int target = 7;
    int first = -1;
    int last = -1;

    for (int i = 0; i < s; i++) {
        if (arr[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    cout << "[" << first << ", " << last << "]" << endl;

    return 0;
}