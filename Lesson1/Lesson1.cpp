#include <iostream>

void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    const int size = 5;

    int sourceArray[size] = { 1, 2, 3, 4, 5 };
    int destinationArray[size];

    copyArray(sourceArray, destinationArray, size);

    std::cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << sourceArray[i] << " ";
    }

    std::cout << "\nСкопированный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << destinationArray[i] << " ";
    }

    return 0;
}