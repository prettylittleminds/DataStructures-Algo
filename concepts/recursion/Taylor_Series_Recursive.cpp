//Recursive Method:
#include <iostream>
using namespace std;

double e(int x, int n) {
    static double p = 1, f = 1;
    double r;

    if ( n == 0 )
        return 1;
    
    else {
        r = e(x, n-1);
        p *= x;
        f *= n;
        return r + (p/f);
    }
}

int main () {
    int x, n;
    cout << "\nEnter val of x: ";
    cin >> x;

    cout << "\nEnter number of terms: ";
    cin >> n;

    double result = e(x, n);

    cout << "\nThe value of e^x is: " << result; 
    return 0;
}

/*

Test Case 1:
Enter val of x: 2

Enter number of terms: 10

The value of e^x is: 7.38899


Test Case 2:
Enter val of x: 4

Enter number of terms: 15

The value of e^x is: 54.5979

Time Complexity: O(N)
Space Complexity: O(1)

*/