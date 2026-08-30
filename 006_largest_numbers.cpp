#include<iostream>
#include<climits>

using namespace std;

int main() {

    int n;
    cin >> n;

    int lsf = INT_MIN; // to track the "largest so far"

    int i = 1;

    while (i <= n) {

        int x;
        cin >> x;

        if (x > lsf) {
            lsf = x;
        }

        // lsf = max(lsf, x);

        i = i + 1;

    }

    cout << "The largest number is: " << lsf << endl;

    return 0;
}







#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {

    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j < high; j++) {

        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high) {

    if (low < high) {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);

        quickSort(arr, pi + 1, high);
    }
}

int main() {

    int arr[] = {10, 7, 8, 9, 1, 5};

    int n = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}