#include <stdio.h> /* Стандартный заголовочный файл ввода-вывода */
#include <iostream> /* Библиотека (стандарт) */
using namespace std;

int main(int argc, char* argv[])
{
    double plus, minus, pow, div; // ОШИБКА 1: pow - зарезервированное имя
    double a1; 
    double a2; 
    cout << "Vvedite prvoe chislo: ";
    cin >> a1;
    cout << "Vvedite vtoroe chislo: ";
    cin >> a2;
    plus = a1 + a2; 
    minus = a1 - a2; 
    pow = a1 * a2; 
    div = a1 / a2; 
    cout << a1 << "+" << a2 << "=" << div << endl; 
    cout << a1 << "-" << a2 << "=" << minus << endl;
    cout << a1 << "*" << a2 << "=" << pow << endl;
    cout << a1 << "/" << a2 << "=" << plus << endl; // ОШИБКА 2: вывод plus вместо div
    system("pause"); // ОШИБКА 3: нет #include <cstdlib>
    return 0;
}