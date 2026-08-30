#include <iostream>
using namespace std;

bool isEven(int n){
	return n % 2 == 0;
}

int main() {
    // your code here

	bool ans = isEven(23);

	cout << ans << endl;

	cout << isEven(3) << endl;
	cout << isEven(4) << endl;

	if(isEven(56)){
		cout << "True" << endl;
	}else{
		cout << "False" << endl;
		
	}

    return 0;
}

