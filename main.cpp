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

void fillArrayptr(int *array, int size) {
    for (int *posidtionptr = array; posidtionptr < array + size; posidtionptr++) {
        *posidtionptr = 0;
    }
}

void arrayFilling() {
    int const size = 50;
    int *array = new int[size];
    fillArrayptr(array, size);
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] = " << array[i] << endl;
    }
    delete [] array;
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
    return 0;
    cout << "Memory deallocated!" << endl;
}

int getAverageFromArray(int *numbers, int size) {
    int sum = 0;
    for (int *posidtionptr = numbers; posidtionptr < numbers + size; posidtionptr++) {
        sum += *posidtionptr;
    }
    return sum / size;
}

int main() {
    //printAddressOfInt(56);
    // pointers(56);
    // swapping();
    // arrayFilling()
    // return movingInArrayUsingPointer();

    return 1;
}
