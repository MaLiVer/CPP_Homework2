#include <iostream>

using namespace std;
void print(int* arr, int size) { // Функция для печати массива
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void copyArray(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++)
    {
        *(arr2 + i) = arr1[i];  // два метода доступа!
    }
}

int main() {
    const int size = 5; // Размер массива
    int arr1[size] = { 1, 3, 5, 7, 9 }; // Исходный массив
    int arr2[size] = { 0 };    // Массив, в который нужно скопировать исходный массив
    
    /*
    * Тут нужно вызывать функцию для копирования массива...
    */
    print(arr1, size);
    copyArray(arr1, arr2, size);
    print(arr2, size);

    return 0;
}
