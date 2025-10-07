/* Возраст.
Дана сигнатура функции: String age (int x);
Необходимо реализовать функцию таким образом, чтобы она возвращала
строку, в которой сначала будет число х, а затем одно из слов:
    • год
    • года
    • лет
Слово “год” добавляется, если число х заканчивается на 1, кроме числа 11.
Слово “года” добавляется, если число х заканчивается на 2, 3 или 4, кроме чисел
12, 13, 14. Слово “лет”добавляется во всех остальных случаях.
    Подсказка: 
        оператор % позволяет получить остаток от деления.
    Пример 1:
        x=5
        результат: “5 лет”
    Пример 2:
        x=31
        результат: “31 год”
    Пример 3:
        x=44
        результат: “44 года”
*/

#include <iostream>
#include <string>
using namespace std;

string age(int x) {
    int lastDigit = x % 10;
    int lastTwoDigits = x % 100;
    
    if (lastDigit == 1 && lastTwoDigits != 11) {
        return to_string(x) + " год";
    } else if ((lastDigit == 2 || lastDigit == 3 || lastDigit == 4) && 
               (lastTwoDigits < 12 || lastTwoDigits > 14)) {
        return to_string(x) + " года";
    } else {
        return to_string(x) + " лет";
    }
}

int main() {
    int x;
    
    cout << "Введите возраст: ";
    while (!(cin >> x)) {
        cout << "Некорректный ввод. Попробуйте снова: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
    cout << "Результат: " << age(x) << endl;
    return 0;
}