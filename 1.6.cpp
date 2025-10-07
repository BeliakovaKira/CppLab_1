/* Большая буква.
Дана сигнатура функции: bool isUpperCase (char x);
Необходимо реализовать функцию таким образом, чтобы она принимала символ x 
и возвращала true, если это большая буква в диапазоне от ‘A’ до ‘Z’.
    Пример 1:
        x=’D’
        результат: true
    Пример 2:
        x=’q’
        результат: false
*/

#include <iostream> 
using namespace std;

bool isUpperCase (char x) {
    if (x >= 'A' && x <= 'Z') {
        cout << "true\n";
        return 0;
    }
    cout << "false\n";
    return 0;
}

int main() {
    char x;
    cout << "Введите символ: ";
    cin >> x;
    cout << "Результат: " << isUpperCase(x);
    return 0;
}