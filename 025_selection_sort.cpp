#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {5,8,2,4,6,1};
    int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[min]){
				min = j;
			}
		}

		swap(arr[i], arr[min]);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

    return 0;
}


