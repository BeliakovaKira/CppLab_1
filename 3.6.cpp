/* Одинаковость.
Дана сигнатура функции: bool equalNum (int x);
Необходимо реализовать функцию таким образом, чтобы она возвращала true,
если все знаки числа одинаковы, и false в ином случае.
    Подсказки:
        int x=123%10; // х будет иметь значение 3
        int у=123/10; // у будет иметь значение 12
    Пример 1:
        x=1111
        результат: true
    Пример 2:
        x=1211
        результат: false
*/

#include <iostream>
using namespace std;

bool equalNum(int x) {
    if (x < 0) x = -x;
    
    int lastDigit = x % 10;
    x = x / 10;
    
    while (x > 0) {
        int currentDigit = x % 10;
        if (currentDigit != lastDigit) {
            return false;
        }
        x = x / 10;
    }
    return true;
}

int main() {
    int x;
    
    cout << "Введите число: ";
    while (!(cin >> x)) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    cout << "Результат: " << (equalNum(x) ? "true" : "false") << endl;
    return 0;
}