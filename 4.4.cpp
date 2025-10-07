/* Добавление в массив.
Дана сигнатура функции: int * add (int arr[], int x, int pos);
Необходимо реализовать функцию таким образом, чтобы она возвращала новый
массив, который будет содержать все элементы массива arr, однако в позицию pos
будет вставлено значение x.
    Пример:
        arr=[1,2,3,4,5]
        x=9
        pos=3
        результат: [1,2,3,9,4,5]
*/

#include <iostream>
using namespace std;

int* add(int arr[], int size, int x, int pos) {
    int* newArr = new int[size + 1];
    
    for (int i = 0; i < pos; i++) {
        newArr[i] = arr[i];
    }
    
    newArr[pos] = x;
    
    for (int i = pos; i < size; i++) {
        newArr[i + 1] = arr[i];
    }
    
    return newArr;
}

int main() {
    int size;
    
    cout << "Введите размер массива: ";
    while (!(cin >> size) || size <= 0) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    int* arr = new int[size];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        while (!(cin >> arr[i])) {
            cout << "Некорректный ввод. Попробуйте снова: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    
    int x, pos;
    cout << "Введите число x: ";
    while (!(cin >> x)) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    cout << "Введите номер позиции: ";
    while (!(cin >> pos) || pos < 0 || pos > size) {
        cout << "Некорректный ввод. Позиция должна быть от 0 до " << size << ": ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    int* result = add(arr, size, x, pos);
    
    cout << "Результат: [";
    for (int i = 0; i < size + 1; i++) {
        cout << result[i];
        if (i < size) cout << ",";
    }
    cout << "]" << endl;
    
    delete[] arr;
    delete[] result;
    return 0;
}