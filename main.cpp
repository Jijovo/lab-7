#include <iostream>
using namespace std;
//Prototypes
string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

int main() {
    const int size = 5;
    string* arr = new string[size];
    *(arr + 0) = "Lotfy";
    *(arr + 1) = "Mohamed";
    *(arr + 2) = "Mustafa";
    *(arr + 3) = "Ahmad";
    *(arr + 4) = "Khaled";
    cout << "Original Array: " << endl;
    displayArray(arr, size);
    cout << endl << "Reversed Array: " << endl;
    displayArray(reverseArray(arr, size), size);
    return 0;
}

//Reverse function, recieves array, creates reversed array and returns its pointer
string* reverseArray(string* arr, int size) {
    string* reversedArr = new string[size];
    for (int i = 0; i < size; i++) {
        *(reversedArr + i) = *(arr + (size - 1 - i));
    }
    return reversedArr;
}
//Display function, recieves array and its size, then displays its elements
void displayArray(string* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << endl;
    }
}
