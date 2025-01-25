#include <iostream>

using namespace std;

int main() {
    
    int rowCount, columnCount;
    
    cout << "Enter the matrix dimensions." << endl << "Count of rows:";
    cin >> rowCount;
    cout << "Count of columns: ";
    cin >> columnCount;
    
    // Проверка размеров матрицы
    if (rowCount > 5 || columnCount > 5) {
        cout << "The array must not exceed 5x5 dimensions!";
        return 1;
    }
    
    int matrix[rowCount][columnCount];
    
    // Инициализация матрицы
    cout << "Enter the matrix elements." << endl;
    for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
        for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
            cout << "Element " << rowIndex + 1 << " row, " << columnIndex + 1 << " column: ";
            cin >> matrix[rowIndex][columnIndex];
        }
    }
    
    // Вывод матрицы
    cout << "Matrix:" << endl;
    for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
        for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
            cout << matrix[rowIndex][columnIndex] << "\t";
        }
        cout << endl;
    }
    
    int elementMax = matrix[0][0], elementMin = matrix[0][0];
    int rowMinElement = 0, columnMinElement = 0, rowMaxElement = 0, columnMaxElement = 0;
    
    for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
        for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
            if (matrix[rowIndex][columnIndex] > elementMax) {elementMax = matrix[rowIndex][columnIndex]; rowMaxElement = rowIndex; columnMaxElement = columnIndex;}
            if (matrix[rowIndex][columnIndex] < elementMin) {elementMin = matrix[rowIndex][columnIndex]; rowMinElement = rowIndex; columnMinElement = columnIndex;}
        }
    }
    
    matrix[rowMaxElement][columnMaxElement] = elementMin;
    matrix[rowMinElement][columnMinElement] = elementMax;
    
    // поменялись макс и мин элементы
    cout << endl << "Матрица обновлена:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
