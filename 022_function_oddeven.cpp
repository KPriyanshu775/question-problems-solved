#include <iostream>
using namespace std;

void isEven(int n){
	if (n % 2 == 0)
	{
		cout << "Even" << endl;
	}else{
		cout << "Odd" << endl;
	}
}

int main() {
    // your code here

    isEven(2);
    isEven(23);
    return 0;
}