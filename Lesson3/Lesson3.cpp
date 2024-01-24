#include <iostream>

using namespace std;
void print(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void calcArray(int* arr1, int size, int* res1, int* res2) {
    for (int i = 0; i < size; i++)
    {
        *res1 = *res1 + arr1[i];
        *res2 = *res2 * arr1[i];
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    const int size = 10;
    int arr1[size] = { 6, 3, 1, 8, 9, 5, 1, 2, 9, 4 };

    print(arr1, size);
    
    int result1 = 0;
    int result2 = 1;
    calcArray(arr1, size, &result1, &result2);
    cout << "Сумма всех элементов: " << result1 << endl;
    cout << "Произведение всех элементов: " << result2 << endl;

    return 0;
}
