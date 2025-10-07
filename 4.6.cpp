/* Реверс.
Дана сигнатура функции: void reverse (int arr[]);
Необходимо реализовать функцию таким образом, чтобы он изменял массив arr.
После проведенных изменений массив должен быть записан задом-наперед.
    Пример:
        arr=[1,2,3,4,5]
        Результат: arr=[5,4,3,2,1]
*/

#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
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
    
    reverse(arr, size);
    
    cout << "Результат: [";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ",";
    }
    cout << "]" << endl;
    
    delete[] arr;
    return 0;
}