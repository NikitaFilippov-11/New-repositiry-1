// StaticLib1.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"

// TODO: Это пример библиотечной функции.
void fnStaticLib1()
{
}

bool checkPrimeNumber(int n) {
    bool isPrimeNumber = true;
    // 0 и 1 не являются простыми числами 
    if (n == 0 || n == 1) {
        isPrimeNumber = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrimeNumber = false;
                break;
            }
        }
    }
    return isPrimeNumber;
}
