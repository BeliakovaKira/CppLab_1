/* Удалить негатив.
Дана сигнатура функции: int * deleteNegative (int arr[]);
Необходимо реализовать функцию таким образом, чтобы она возвращала новый
массив, в котором записаны все элементы массива arr кроме отрицательных.
    Пример:
        arr=[1,2,-3,4,-2,2,-5]
        результат: [1,2,4,2]
*/

#include <iostream>
using namespace std;

int* deleteNegative(int arr[], int size, int& newSize) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            count++;
        }
    }
    
    newSize = count;
    int* newArr = new int[count];
    int index = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            newArr[index] = arr[i];
            index++;
        }
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
    
    int newSize;
    int* result = deleteNegative(arr, size, newSize);
    
    cout << "Результат: [";
    for (int i = 0; i < newSize; i++) {
        cout << result[i];
        if (i < newSize - 1) cout << ",";
    }
    cout << "]" << endl;
    
    delete[] arr;
    delete[] result;
    return 0;
}
