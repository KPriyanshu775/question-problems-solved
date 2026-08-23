// #include <iostream>
// using namespace std;

// int main() {
    
//     int n = 5;
// 	int ans = n * n;
// 	cout << ans;



//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
	int ans = 0;
    for(int i = 1; i <= n; i++){
    	if(i * i == n){
    		ans = i;
    	}
    }
    cout << ans;
    return 0;
}