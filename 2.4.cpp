/* Строка сравнения.
Дана сигнатура функции: String makeDecision (int x, int y);
Необходимо реализовать функцию таким образом, чтобы она возвращала
строку, которая включает два принятых функцией числа и корректно
выставленный знак операции сравнения (больше, меньше, или равно).
    Пример 1:
        x=5 y=7
        результат: “5 < 7”
    Пример 2:
        x=8 y=-1
        результат: “8 >- 1”
    Пример 3:
        x=4 y=4
        результат: “4 == 4”
*/

#include <iostream>
#include <string>
using namespace std;

string makeDecision(int x, int y) {
    if (x > y) {
        return to_string(x) + " > " + to_string(y);
    } else if (x < y) {
        return to_string(x) + " < " + to_string(y);
    } else {
        return to_string(x) + " == " + to_string(y);
    }
}

int main() {
    int x, y;
    
    cout << "Введите два целых числа:" << endl;
    
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
    
    cout << "Результат: " << makeDecision(x, y) << endl;
    
    return 0;
}