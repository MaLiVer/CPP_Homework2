#include <iostream> 

using namespace std;


void printMatrix(int** matrix, int row, int column) { // Печатает матрицу[row][size] 
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < column; c++) {
            cout << matrix[r][c] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int** removeRedunant(int** matrix, int row, int column, int& fixedRows) {
    int* nullRows = new int[row] {}; // Вспомогательный массив для подсчета ненулевых рядов 
    fixedRows = 0; // Количество новых рядов 
    for (int r = 0; r < row; r++) {
        bool isNull = false; // !!!   Изначально ряд считается нулевым 
        for (int c = 0; c < column; c++) {
            if (matrix[r][c] == 0) { // !!!   Если содержится элементы не равный нуля, то ряд не нулевой 
                isNull = true; // Пометка, что ряд не нулевой 
                break;
            }
        }
        if (isNull) { // Если ряд нулевой, тогда... 
            nullRows[r] = true; // ...в вспомогательном массиве он помечается нулевым 

        }
        else {
            fixedRows++; // Если о не не нулевой, тогда счетчик рядов увеличивается 
        }
    }
    int** resultMatrix = new int* [fixedRows]; // Новая результирущая матрица 
    int index = 0; // Индекс для присвоения новой матрице не нулевого ряда 
    for (int r = 0; r < row; r++) {
        if (nullRows[r]) { // Если ряд в спомогательном массиве нулевой... 
            delete matrix[r]; // ...то его надо очистить 
        }
        else {
            resultMatrix[index++] = matrix[r]; // Не нулевые ряды присваиваются новой матрице  
        }
    }
    delete matrix; // Старую матрицу надо удалить, т.к. ее использование потенциально опасно 
    return resultMatrix; // Возвращает в качетсве результата адрес новой матрицы 
}


int main() {
    int randA = rand() % 1000;
    int* randAdress = (int*)randA;
    srand(time(0));

    int rows = rand() % 10 + 3;
    int columns = rand() % 10 + 3;
    int** matrix = new int* [rows]; // Создается матрица 

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[columns] {};
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = rand() % 10 + 1 - 5;
        }
    }

    printMatrix(matrix, rows, columns); // Вывод матрицы 
    int fixedRows; // Переменная, которая будет значением рядов новой матрицы в результате работы функции 
    matrix = removeRedunant(matrix, rows, columns, fixedRows); // Функция для удаления нулевых рядов 
    printMatrix(matrix, fixedRows, columns); // Вывод новой матрицы 
    return 0;
}