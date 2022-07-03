//Efficient Recursive Method for Fibonacci Series:

#include <iostream>
using namespace std;


int F[10];
int fibo (int n) {
    if (n <= 1) {
        F[n]=n;
        return n;
    }
    else {
        if (F[n-2] == -1)
            F[n-2] = fibo(n-2);
        
        if (F[n-1] == -1)
            F[n-1] = fibo(n-1);

        return F[n-2] + F[n-1];
    }
}

int main () {
    int n, i;
    for (i = 0; i<=10; i++)
        F[i]=-1;
    
    
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