#include <iostream>
using namespace std;

int sumN(int n) {
    if ( n > 0 ) {
        int sum = sumN(n-1) + n;
        return sum;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    cout << "\nEnter the number upto which sum should be calculated: ";
    cin >> n;

    int sum = sumN(n);
    cout << "\nHence, the sum of " << n << " natural numbers is: " << sum;
}

/*
Alternate approach:
int sumN(int n) {
    if ( n == 0 ) {
        return 0;
    }
    else {
        return sumN(n-1) + n;
    }
}
*/