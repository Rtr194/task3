#include <stdio.h> /* Стандартный заголовочный файл ввода-вывода */
#include <iostream> /* Библиотека (стандарт) */
#include <cstdlib>  /* ИСПРАВЛЕНО: добавлено для system() */

using namespace std;

int main(int argc, char* argv[])
{
    double plus, minus, mult, div; // ИСПРАВЛЕНО: pow заменено на mult
    double a1; 
    double a2; 
    cout << "Vvedite prvoe chislo: ";
    cin >> a1;
    cout << "Vvedite vtoroe chislo: ";
    cin >> a2;
    plus = a1 + a2; 
    minus = a1 - a2; 
    mult = a1 * a2; // ИСПРАВЛЕНО
    div = a1 / a2; 
    cout << a1 << "+" << a2 << "=" << plus << endl; // ИСПРАВЛЕНО: выводим plus вместо div
    cout << a1 << "-" << a2 << "=" << minus << endl;
    cout << a1 << "*" << a2 << "=" << mult << endl; // ИСПРАВЛЕНО
    cout << a1 << "/" << a2 << "=" << div << endl;  // ИСПРАВЛЕНО: выводим div
    system("pause"); 
    return 0;
}