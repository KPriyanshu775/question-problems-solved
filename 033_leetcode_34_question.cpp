#include <iostream>
using namespace std;

int main() {

int arr[] = {1,2,4,5,6,6,7,7};
int s = sizeof(arr) / sizeof(int);

for(int i = 0; i < s; i++){
    int t = arr[6];
    if(arr[i] == arr[t]){
        cout << arr[i] << " " << endl;
    }

}
    return 0;
}