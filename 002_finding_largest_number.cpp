#include <iostream>
using namespace std;

int main() {
    
	int arr[] = {0,8,6,9,34,76,87};
	int largest = arr[0];
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
			
		}
	}
		cout << largest;

    return 0;
}

