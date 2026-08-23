#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    bool ans = true;

    for (int i = 2; i < n; i++)
    {
 			if (n % i == 0)
 			{
 				ans = false;
 			}
    }
    if (ans)
    {
    	cout << "True";
    }else{
    	cout << "False";
    }
    return 0;
}