#include <iostream>

using namespace std;

int main() {
    
    int arraySize;

    cout << "Enter array size: ";
    cin >> arraySize;

    // Проверка на положительность
    if (arraySize <= 0) {
        cout << "The array size must be positive!" << endl;
        return 1;
    }

    int array[arraySize], elementSum = 0, elementProduct = 1;

    // Вводим элементы массива
    cout << "Enter array elements." << endl;
    for (int elementIndex = 0; elementIndex < arraySize; ++elementIndex) {
        
        cout << "Элемент " << elementIndex + 1 << ": ";
        cin >> array[elementIndex];

        sum     += array[elementIndex];
        product *= array[elementIndex];
    }

    cout << "Сумма элементов: " << elementSum << endl;
    cout << "Произведение элементов: " << elementProduct << endl;

    return 0;
}
