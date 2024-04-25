#include <iostream> 
#include "../StaticLib1/framework.h"
using namespace std;

int nextPrimeNumber(int n)
{
    // Проверка данного числа
    bool prime = n % 2;
    int s = sqrt(n);
    for (int i = 3; i <= s && prime; i += 2)
        prime = prime && (n % i);
    // Поиск следующего простого числа
    do
    {
        n += 2;
        prime = true;
        s = sqrt(n);
        for (int i = 3; i <= s && prime; i += 2)
            prime = prime && (n % i);
    } while (!prime);
    return n;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите целочисленное положительное значение: ";
    cin >> n;

    if (checkPrimeNumber(n))
        cout << n << " — это простое число.";
    else
        cout << n << " — это значение не является простым числом.";
    return 0;
    /*int n = 10000000;
    cout << "Следующее простое число после " << n << " = ";
    cout << nextPrimeNumber(n); */
}

