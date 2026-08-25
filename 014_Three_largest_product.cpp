#include <iostream>
using namespace std;

int main() {
    
    int arr[6] = {34,32,65,76,12,123};
    int largest = arr[0];
    int secondlargest = arr[0];
    int thirdlargest = arr[0];
    int ans = 0;

    for (int i = 1; i < 6; i++)
    {
        if(arr[i] > largest){
        	thirdlargest = secondlargest;
        	secondlargest = largest;
        	largest = arr[i];


        }else if(arr[i] > secondlargest){
        	thirdlargest = secondlargest;
        	secondlargest = arr[i];

        }else if(arr[i] > thirdlargest){
        	thirdlargest = arr[i];

        }


    }

    	cout << largest << " " << secondlargest << " " << thirdlargest << endl;

        int product = largest * secondlargest * thirdlargest;
        cout << product;

    return 0;
}						