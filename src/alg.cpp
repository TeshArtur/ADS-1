// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
#include <iostream>
using namespace std;
int main() {
    int num = 0;
    int i = 2;
    int Otv = 0;
    float Z = 0;
    cin >> num;

    while (i < num)
    {
        Z = num % i;      //cout << num << "|" << i << endl;
        if (Z == 0) {
            Otv = 1;
            break;
        }
        i++;
    }
    if (Otv == 1) {
        cout << "false" << endl;
    }
    else {
        cout << "true" << endl;
    }
}
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
}
