/* Есть ли позитив.
Дана сигнатура функции: bool isPositive (int x);
Необходимо реализовать функцию таким образом, чтобы она принимала число x 
и возвращала true, если оно положительное.
    Пример 1:
        x=3
        результат: true
    Пример 2:
        x=-5
        результат: false
*/

#include <iostream> 
#include <string>
using namespace std;

bool isPositive (int x) {
    if (x < 0) {
        cout << "false" << endl;
    } if (x > 0) {
        cout << "true" << endl;
    }
    return 0;
}

int main() {
    string input;
    int x;

    while (cout << "Введите число x: " && getline(cin, input)){
        try {
            x = stoi(input);
            break;
        } catch (...) {
            cout << "Некорректный ввод. Попробуйте снова\n";
        }
    }
    
    cout << "Результат: " << isPositive(x);
    return 0;
}