
#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    float num1, num2, res;
    char op;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите действие +, -, *, /: ";
    cin >> op;

    cout << "Введите второе число: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        res = 0; cout << "Ошибка!";
        break;
    }
    cout << "Ответ: " << res << endl;
    return 0;
}