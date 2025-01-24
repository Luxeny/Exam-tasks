#include <iostream>
using namespace std;

int main() {
    
    int N, M;
    cout << "Введите количество этажей в небоскрёбе: ";
    cin >> N;
    cout << "Введите номер квартиры: ";
    cin >> M;

    // проверка на допустимость номера квартиры
    if (M < 1 || M > 3 * N) {
        cout << "Неверный номер квартиры!" << endl;
        return 1;
    }

    // Определяем номер обычного этажа, на котором находится квартира
    int num_floor = (M - 1) / 3 + 1;

    if (num_floor % 2 == 0) {
        cout << "Лифт должен остановиться на " << (num_floor -= 1) << " этаже.";
    }
    else {
        cout << "Лифт должен остановиться на " << num_floor << " этаже.";
    }
}
