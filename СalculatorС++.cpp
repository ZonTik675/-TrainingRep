#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char op;
    double num1, num2;

    cout << "Введите оператор (+, -, *, /): ";
    cin >> op;

    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    switch(op) {
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
            if(num2 != 0) {
                cout << "Результат: " << num1 / num2 << endl;
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
            }
            break;
        default:
            cout << "Ошибка: Недопустимый оператор!" << endl;
            break;
    }

    return 0;
}

