#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {4,3,6,1,9};

    int largest = arr[0];
    int secondlargest = arr[1];

    for(int i = 2; i < 5; i++){
        if(arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }else if(arr[i] > secondlargest){
            secondlargest = arr[i];
        }
    }

    cout << secondlargest << endl;
    return 0;
}