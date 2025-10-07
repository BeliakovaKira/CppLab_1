/* Тройная сумма.
Дана сигнатура функции: bool sum3 (int x, int y, int z);
Необходимо реализовать функцию таким образом, чтобы она 
возвращала true, если два любых числа (из трех принятых) 
можно сложить так, чтобы получить третье.
    Пример 1:
        x=5 y=7 z=2
        результат: true
    Пример 2:
        x=8 y=-1 z=4
        результат: false
*/

#include <iostream>
using namespace std;

bool sum3(int x, int y, int z) {
    return (x + y == z) || (x + z == y) || (y + z == x);
}

int main() {
    int x, y, z;
    
    cout << "Введите три целых числа:" << endl;
    
    while (!(cin >> x)) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    while (!(cin >> y)) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    while (!(cin >> z)) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    cout << "x=" << x << " y=" << y << " z=" << z << endl;
    cout << "Результат: " << (sum3(x, y, z) ? "true" : "false") << endl;
    
    return 0;
}