/* Числа наоборот.  
Дана сигнатура функции: String reverseListNums (int x); 
Необходимо реализовать функцию таким образом, чтобы она возвращала строку, 
в которой будут записаны все числа от x до 0 (включительно). 
    Пример: 
        x=5 
        результат: “5 4 3 2 1 0” 
*/

#include <iostream>
#include <String>
using namespace std;

string listNums(int x) {
    string res = "";

    if (x >= 0) {
        for (int i = x; i >=0; i--) {
            res += to_string(i);
            if (i > 0) {
                res += " ";
            }
        }
    }
    else {
        for (int i = x; i <= 0; i++) {
            res += to_string(i);
            if (i < 0) {
                res += " ";
            }
        }
    }
    return res;
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
    cout << "Все числа от " << x << " до 0: "<< endl << listNums(x);
    return 0;

}
