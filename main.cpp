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

int main() {
    //printAddressOfInt(56);
    pointers(56);
    return 0;
}
