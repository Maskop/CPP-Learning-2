#include <iostream>
#include <string>
using namespace std;

void printAddressOfInt(int input) {
    cout << "Number " << input << " is at address " << &input << endl;
    cin.get();
}

void pointers(int input) {
    int *pointerInput = &input;
    cout << "Change number at address " << pointerInput << " to: "; cin >> *pointerInput;
    cout << "Pointer pointerInput has value " << pointerInput << " and the value at this address is " << *pointerInput << endl;
    cout << "Value of input is " << input << endl;
    cin.get();
}

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapping() {
    int a = 5, b = 10;
    cout << "Before swapping: a = " << a << " and b = " << b << endl;
    swapNumbers(&a, &b);
    cout << "After swapping: a = " << a << " and b = " << b << endl;
    cin.get();
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
}

void arrayFilling() {
    int const size = 10;
    int array[size];
    fillArray(array, size);
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] = " << array[i] << endl;
    }
}


int main() {
    //printAddressOfInt(56);
    // pointers(56);
    // swapping();
    // arrayFilling()
    return 0;
}
