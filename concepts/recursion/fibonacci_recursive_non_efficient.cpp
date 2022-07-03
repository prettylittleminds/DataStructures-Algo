//Non-efficient Recursive Method for Fibonacci Series:

#include <iostream>
using namespace std;

int fibo (int n) {
    int f = 0, s = 1,t;

    if ( n <= 1) 
        return n;
    
    else {
        return fibo(n-2) + fibo(n-1);
    }
    return t; 
}

int main () {
    int n;

    cout << "\nEnter the index: ";
    cin >> n;

    int result = fibo(n);

    cout  << "\nThe value at index " << n << " is: " << result; 
    return 0;
}

/*

Test Case 1:
Enter the index: 6

The value at index 6 is: 8


Test Case 2:
Enter the index: 8

The value at index 8 is: 21

Time Complexity: O(2^N) --Inefficient
Space Complexity: O(1)

*/