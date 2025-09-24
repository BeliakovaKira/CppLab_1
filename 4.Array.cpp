/* Поиск последнего значения.  
Дана сигнатура функции: int findLast (int arr[], int x); 
Необходимо реализовать функцию таким образом, чтобы она возвращала индекс последнего 
вхождения числа x в массив arr. Если число не входит в массив – возвращается -1. 
    Пример: 
        arr=[1,2,3,4,2,2,5] 
        x=2 
        результат: 5
*/

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

