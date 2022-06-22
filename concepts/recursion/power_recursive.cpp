#include <iostream>
using namespace std;

int pow( int m, int n ) {
    if ( n == 0 )
        return 1;
    else if ( n % 2 == 0 ) 
        return pow( m*m, n/2);
    else
        return m* pow( m*m, (n-1)/2 );
}

int main() {
    int m,n;
    cout << "Enter m: " << endl;
    cin >> m;
    cout << "Enter n: " << endl;
    cin >> n;

    int power = pow( m, n);
    cout << "\nm^n = " << power;
}

/*

Alternate Approach (Takes More Time and Space Though) 
int pow( int m, int n ) {
    if ( n == 0 )
        return 1;
    else 
        return pow( m, n-1 ) * m;
}
*/