#include <iostream>
using namespace std;

int main() {
    int arr[] = {20,5,25,10,15};
    int n = sizeof(arr) / sizeof(int);
    int ans = 1;
    for(int i = 0; i < n; i++){
    	ans = ans * arr[i];
    }

    cout << ans;

    return 0;
}	  