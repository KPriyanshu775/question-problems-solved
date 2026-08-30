#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 1; i <= 5; i++){
    	cout << "* ";

    }
    cout << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
 	 	for(int j = 1; j <= i; j++){
 	 		cout << "* ";
 	 	}
 	 	cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
       for(int j = 1; j <= n; j++){
       	cout << "*";
       }
       cout << endl;
    }
    return 0;
}





































