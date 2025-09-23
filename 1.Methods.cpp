#include <iostream> 
using namespace std;

int sumLastNums(int x) {
    int num = x;
    if (num < 0) {
        num = -num;
    }

    if (num < 10) {
        cout << "Некорректный ввод" << endl;
        return 0;
    }

    int lastDig = num % 10;
    int preLastDig = (num / 10) % 10;
    return lastDig + preLastDig;
}

int main() { 
    int n;
    cout << "Введите число n (не менее двух знаков): ";
    cin >> n;
    cout << sumLastNums(n);
    return 0;
}