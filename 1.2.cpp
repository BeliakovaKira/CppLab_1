/* Сумма знаков.  
Дана сигнатура функции: int sumLastNums (int x); 
Необходимо реализовать функцию таким образом, чтобы она возвращала результат сложения 
двух последних знаков числах, предполагая, что знаков в числе не менее двух. 
    Подсказки: 
        int x=123%10; // х будет иметь значение 3 
        int у=123/10; // у будет иметь значение 12 
    Пример: 
        x=4568 
        результат: 14 
*/

#include <iostream> 
using namespace std;

int sumLastNums(int x) {
    int num = x;
    if (num < 0) {
        num = -num;
    }

    if (num < 10) {
        cout << "Некорректный ввод" << endl;
    }

    int lastDig = num % 10;
    int preLastDig = (num / 10) % 10;
    cout << "Сумма двух последних знаков: " << lastDig + preLastDig << endl;
    return 0;
}

int main() { 
    string input;
    int n;
    while (cout << "Введите число x: " && getline(cin, input)){
        try {
            n = stoi(input);
            break;
        } catch (...) {
            cout << "Некорректный ввод. Попробуйте снова\n";
        }
    }
    cout << sumLastNums(n);
    return 0;
}


