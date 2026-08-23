#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int target;
    cin >> target;

    int first = 0;
    int second = 1;

    cout << first << " " << second << " ";
    int sum = 0;
    bool ans = false;

    for(int count = 2; count < n; count++){
    	 sum = first + second;
    	 cout << sum << " ";

         if (target == sum)
         {
            ans = true;
         }

    	 first = second;
    	 second = sum;
    } 

    cout << endl;

    if(ans){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;

    }
    
    return 0;
}
