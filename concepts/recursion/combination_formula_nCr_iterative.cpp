//Iterative Method for nCr formula:
// nCr = (n-1Cr-1) + (n-1Cr) -- from Pascal's Triangle

#include <iostream>
using namespace std;

int fact( int n ) {
    if ( n == 0 ) 
        return 1;
    else
        return fact( n - 1 ) * n;
}

int nCr(int n, int r) {
    int rf, nf, nrf;
    nf = fact(n);
    rf = fact(r);
    nrf = fact(n-r);

    return nf/(rf*nrf);
}

int main() {
    int n, r;
    cout << "\nEnter the total number of objects, n: ";
    cin >> n;

    cout << "\nHow many objects r do you wish to select? ";
    cin >> r;

    int result = nCr(n,r);
    cout << "\nThe number of ways thus are: " << result;

    return 0;
}

/*

Test Case 1:
Enter the total number of objects, n: 3

How many objects r do you wish to select? 2

The number of ways thus are: 3

Test Case 2:
Enter the total number of objects, n: 4

How many objects r do you wish to select? 2

The number of ways thus are: 6

*/