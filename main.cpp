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

int movingInArrayUsingPointer() {
    int const size = 10;
    int *array = new int[size];
    if (array == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }
    fillArray(array, size);
    int *fiftElement = array + 5;
    cout << "Fifth element is " << *fiftElement << endl;
    cout << "Pointer fiftElement is Indexed in array as " << fiftElement - array << endl;
    delete [] array;
    array = NULL;
    return 0;
}

int main() {
    //printAddressOfInt(56);
    // pointers(56);
    // swapping();
    // arrayFilling()
    // return movingInArrayUsingPointer();

    return 1;
}
