/* Объединение.
Дана сигнатура функции: int * concat (int arr1[],int arr2[]);
Необходимо реализовать функцию таким образом, чтобы она возвращала новый массив, 
в котором сначала идут элементы первого массива (arr1), а затем второго (arr2).
    Пример:
        arr1=[1,2,3]
        arr2=[7,8,9]
        результат: [1,2,3,7,8,9]
*/

#include <iostream>
using namespace std;

int* concat(int arr1[], int size1, int arr2[], int size2) {
    int* newArr = new int[size1 + size2];
    
    for (int i = 0; i < size1; i++) {
        newArr[i] = arr1[i];
    }
    
    for (int i = 0; i < size2; i++) {
        newArr[size1 + i] = arr2[i];
    }
    
    return newArr;
}

int main() {
    int size1, size2;
    
    cout << "Введите размер первого массива: ";
    while (!(cin >> size1) || size1 <= 0) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    int* arr1 = new int[size1];
    cout << "Введите элементы первого массива: ";
    for (int i = 0; i < size1; i++) {
        while (!(cin >> arr1[i])) {
            cout << "Некорректный ввод. Попробуйте снова: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    
    cout << "Введите размер второго массива: ";
    while (!(cin >> size2) || size2 <= 0) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    int* arr2 = new int[size2];
    cout << "Введите элементы второго массива: ";
    for (int i = 0; i < size2; i++) {
        while (!(cin >> arr2[i])) {
            cout << "Некорректный ввод. Попробуйте снова: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    
    int* result = concat(arr1, size1, arr2, size2);
    
    cout << "Результат: [";
    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i];
        if (i < size1 + size2 - 1) cout << ",";
    }
    cout << "]" << endl;
    
    delete[] arr1;
    delete[] arr2;
    delete[] result;
    return 0;
}