#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = 7;
    int target = 6;

    cout << firstOccurrence(arr, n, target);

    return 0;
}