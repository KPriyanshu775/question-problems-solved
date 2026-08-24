#include <iostream>
using namespace std;

int main() {
    
    int arr[7] = {2,3,4,3,1,0,3};
    int target;

    cin >> target;
    for(int i = 0; i < 7; i++){
    	if(arr[i] == target){
            cout <<  i;
    	}
    }

    return 0;
}