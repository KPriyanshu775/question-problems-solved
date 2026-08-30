// #include <iostream>
// using namespace std;

// void myFunction() {  //	2nd
// 	cout << "My name is Priyanshu"; // 3rd
// } // 4th

// int main() {  // Start from here 

//     myFunction(); //	1st,	5th

//     return 0;  // 6th
// }  // 7th -> End





/*
It means from main cpp sees that myFunction(); 
line number 10 has been called. Then it checks that 
is there any myFunction named function is there or not. 
Then after verification it checks what is the task here. 
The task is written to print a line. Then it executes 
the line and prints it. Then it checks if there is any 
other task, it sees } which means there is no other task 
inside the function. Then the function finishes and 
comes back to main(), after the myFunction(); line. 
Then it goes to return 0; and then the program ends.
*/


// Now when to use return function.

#include <iostream>
using namespace std;

int myFunction() {               // 2nd
    int b = 8;                   // 3rd
    return b;                    // 4th
}                                // 5th

int main() {                     // START

    int a = 5;                   // 1st
    int b = myFunction();        // 6th
    int c = a + b;               // 7th
    cout << c;                   // 8th

    return 0;                    // 9th
}                                // 10th → END                         // 11th → END


#include <iostream>
using namespace std;

int myFunction() {               // 2nd
    int b = 8;                   // 3rd
    return b;                    // 4th
}                                // 5th

int main() {                     // START

    int b = myFunction();        // 1st, 6th

    int a = 5;                   // 7th
    int c = a + b;               // 8th
    cout << c;                   // 9th

    return 0;                    // 10th
}                                // 11th → END



/*

                 START
                   ↓
                main()
                   ↓
       int myMarks = getMarks();
                   ↓
          "I need the result
             of getMarks"
                   ↓
              getMarks()
                   ↓
          int marks = 85;
                   ↓
             return marks;
                   ↓
              return 85
                   ↓
            BACK TO main()
                   ↓
       myMarks = 85
                   ↓
       cout << myMarks;
                   ↓
             OUTPUT: 85
                   ↓
              return 0;
                   ↓
                  END

*/

void myName() {              // 2?
    cout << "Priyanshu";     // 3?
}							 // 4

int main() {                 // START

    myName();                // 1 5 ?

    return 0;                //  6?
}                            //  7?



