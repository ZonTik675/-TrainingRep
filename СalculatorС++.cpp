#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;
    cin >> op;
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        cout << "Результат: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Результат: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Результат: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Результат: " << num1 / num2 << endl;
        }
        else {
            cout << "Ошибка: деление на ноль!" << endl;
        }
        break;

    }

    return 0;
}