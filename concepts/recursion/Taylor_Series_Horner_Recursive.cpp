//Horner's Rule in Iterative Method for Taylor Series reduces the total
//number of multiplications, thereby reducing time complexity to O(N):
#include <iostream>
using namespace std;

double e (int x, int n) {

    static double r = 1;
    
    if (n == 0) 
        return r;
    
    else {
        r = 1 + ((x * r) / n);
        return e (x, n-1);
    }
}

int main () {
    int x, n;
    cout << "\nEnter val of x: ";
    cin >> x;

    cout << "\nEnter number of terms: ";
    cin >> n;

    double result = e (x,n);

    cout << "\nThe value of e^x is: " << result; 
    return 0;
}

/*

Test Case 1:
Enter val of x: 2

Enter number of terms: 10

The value of e^x is: 7.38899


Test Case 2:
Enter val of x: 5

Enter number of terms: 20

The value of e^x is: 148.413

Time Complexity: O(N)
Space Complexity: O(1)

*/