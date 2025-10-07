/* Делитель.
Дана сигнатура функции: bool isDivisor (int a, int b);
Необходимо реализовать функцию таким образом, чтобы она возвращала true,
если любое из принятых чисел делит другое нацело.
    Пример 1:
        a=3 b=6
        результат: true
    Пример 2:
        a=2 b=15
        результат: false
*/

#include <iostream>
#include <string>
using namespace std;

bool isDivisor(int a, int b) {
    return (a % b == 0) || (b % a == 0);
}

int main() {
    int a, b;
    
    cout << "Введите два целых числа:" << endl;
    
    while (!(cin >> a)) {
        cout << "Ошибка! Введите целое число: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    while (!(cin >> b)) {
        cout << "Ошибка! Введите целое число: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    cout << "a = " << a << " b = " << b << endl;
    cout << "Результат: " << (isDivisor(a, b) ? "true" : "false");
    
    return 0;
}