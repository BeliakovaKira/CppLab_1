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
    int x;
    cout << "Введите число x: ";
    cin >> x;
    cout << "Все числа от " << x << " до 0: "<< endl << listNums(x);
    return 0;
}