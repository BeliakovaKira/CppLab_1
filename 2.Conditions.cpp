#include <iostream>
using namespace std;

double safeDiv(int x, int y) {
    if (y == 0) {
        return 0;
    }
    return x / y;
}

int main() {
    int x, y;
    cout << "Введите делимое (x) и делитель (y): ";
    cin >> x >> y;
    cout << x << " / " << y << " = " << safeDiv(x, y);
    return 0;
}