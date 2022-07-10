#include <iostream>
using namespace std;
 
class Array{
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size){
        this->size = size;
        A = new int [size];
    }
 
    void create(){
        cout << "Enter number of elements: " << flush;
        cin >> length;

        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }
 
    void display(){
        cout << "\nArray is: " << endl;
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
    }
 
    ~Array(){
        delete[] A;
        cout << "\nArray destroyed." << endl;
    }
};

int main() {
 
    Array arr(10);
    arr.create();
    arr.display();
 
    return 0;
}

/*
Test Case: 
Enter number of elements: 5
Enter the array elements: 
Array element: 0 = 3   
Array element: 1 = 93
Array element: 2 = 33
Array element: 3 = 12
Array element: 4 = 84

Array is:
3 93 33 12 84 
Array destroyed.
*/