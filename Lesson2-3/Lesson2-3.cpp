#include <iostream>

using namespace std;
void printMatrix(int(*mat)[3]) { // Функция для печати массива
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// реализовать функцию копирования матриц
void copyMatrix(int(*mat1)[3], int(*mat2)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat2[i][j] = mat1[i][j];
        }
    }
}

int main() {
    // Матрица - двумерый массив
    const int size = 3; // Размер матрицы
    int mat1[size][size] = { {3, 2, 1}, {6,5,4}, {9,8,7} }; // Исходная матрица
    int mat2[size][size] = {};    // Массив, в который нужно скопировать исходный массив

    printMatrix(mat1);
    printMatrix(mat2);
    // Вызвать функцию копирования матрицы
    copyMatrix(mat1, mat2);

    printMatrix(mat2);

    return 0;
}
