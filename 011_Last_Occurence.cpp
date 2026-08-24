#include <iostream>
using namespace std;

int main() {
    
    int arr[7] = {2,3,4,3,1,0,3};
    int target;
    int pos = -1;
    cin >> target;
    for(int i = 0; i < 7; i++){
    	if(arr[i] == target){
    		pos = i;
    	}
    }
    cout << pos;

    return 0;
}