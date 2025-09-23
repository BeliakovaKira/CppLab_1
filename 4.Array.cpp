#include <iostream>
using namespace std;

int findLast(int arr[], int size, int x) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;

    cout << "Введите размер массива: ";
    cin >> size;

    if (size <= 0) {
        cout << "Некорректный ввод" << endl;
        return 1;
    }

    int arr[size];

    cout << "Введите " << size << " целых чисел:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Введите число для поиска: ";
    cin >> x;

    int res = findLast(arr, size, x);

    cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (res != -1) {
        cout << "Индекс последнего вхождения числа " << x << ": " << res << endl;
    } else {
        cout << "Число " << x << " не найдено" << endl;
    }

    return 0;
}