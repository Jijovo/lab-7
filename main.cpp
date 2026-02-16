#include <iostream>
using namespace std;
//Prototypes
string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

int main() {

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