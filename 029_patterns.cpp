// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for (int i = 1; i <= n; i++) {
//             cout << "* ";
//         }
//         cout << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;   
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n - i; j++){
//             cout << "  ";
//         }
//         for(int k = 1; k <= i; k++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
