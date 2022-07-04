//Recursice Tower of Hanoi Problem:

#include <iostream>
using namespace std;

int towerOfHanoi(int n, int t1, int t2, int t3) {
    if (n > 0) {
        towerOfHanoi(n-1, t1, t3, t2);
        cout << "(" << t1 << "," << t3 << ")" << endl;
        towerOfHanoi(n-1, t2, t1, t3);
    }
}
int main() {
    int n;
    cout << "\nEnter number of rings in tower A: ";
    cin >> n;

    cout << "\nThe process to follow is: " << endl;
    towerOfHanoi(n,1,2,3);

    return 0;
}

/*
Time Complexity : O(N)

Test Case: 
Enter number of rings in tower A: 3

The process to follow is:
(1,3)
(1,2)
(3,2)
(1,3)
(2,1)
(2,3)
(1,3)

*/