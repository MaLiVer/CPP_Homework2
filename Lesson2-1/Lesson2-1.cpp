#include <iostream>

using namespace std;

// реализовать функцию копирования переменной
void copyVariable(int* var1, int* var2) {
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a = 4; // Переменная 1
    int b = 7; // Переменная 2

    std::cout << "a: " << a << endl;
    std::cout << "b: " << b << endl;

    std::cout << "копирование... меняем местами" << endl;
    copyVariable(&a, &b); // В функцию передаются адреса переменных

    std::cout << "a: " << a << endl;
    std::cout << "b: " << b << endl;
}
