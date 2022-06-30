//Iterative Method:
#include <iostream>
using namespace std;

double e (int x, int n) {

    double r = 1, p = 1, f = 1;
    int i;
    
    for (i = 1; i <= n; i++){
        p = p * x;
        f = f * i;
        r += p/f;
    }
    
    return r;
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