#include <iostream> 
using namespace std;

int fact( int n ) {
    if ( n == 0 ) 
        return 1;
    else
        return fact( n - 1 ) * n;
}

int main() {
    int n;
    cout << "\nEnter the number whose factorial is to be calculated: ";
    cin >> n;

    int factorial = fact(n);
    cout << "\nHence, the factorial of " << n << " is: " << factorial;
}