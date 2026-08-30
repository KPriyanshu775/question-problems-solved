#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {4,2,3,4,2};
    int target;
    cin >> target;

    for(int i = 0; i < 5; i++){
    	if(arr[i] == target){
    		cout << i;
    		break;
    	}

    }
    return 0;
}