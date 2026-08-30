#include <iostream>
using namespace std;

int main() { 
    int n;
    cin >> n;
    int first = 0;
    int second = 1;
    // cout << first << " " << second << " ";
    int sum = 0;
    bool ans = false;
    if (n == 0 || n == 1)
    {
        ans = true;
    }
    for(int count = 2; count < n; count++){
    	 sum = first + second;
    	 // cout << sum << " ";
         if (n == sum)
         {
            ans = true;
            break;
         } 
    	 first = second;
    	 second = sum;
    }
        if (ans)
        {
            cout << "true";
        }else{
            cout << "false";
        }
    return 0;
}
