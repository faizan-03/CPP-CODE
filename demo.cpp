#include <iostream>
using namespace std;

// Write a program to print table of a number.

// void printTable() {

//     int n;
//     cout << "Enter number: ";
//     cin >> n;

//     for (int i = 1; i <= 10; i++) {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }
// }


void evenOrOdd() {
    
     int n;
    cout << "Enter number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return ;
}

int main() {
    
// printTable();
    evenOrOdd();


    return 0;
}



// Write a program to check if a number is even or odd.
// Write a program to reverse a number.
// Find the largest digit in a number.
// Count how many even digits and odd digits in a number.
// Fibonacci series using recursive method.
// Print primes between two numbers (A to B).