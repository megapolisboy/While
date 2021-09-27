// While.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int while1(int a, int b) {
    while (a >= b) {
        a -= b;
    }
    return a;
}

int while2(int a, int b) {
    int counter = 0;
    while (a >= b) {
        a -= b;
        counter++;
    }
    return counter;
}

void while3(int n, int k) {
    int result = 0;
    int remainder;
    while (n >= k) {
        n -= k;
        result++;
    }
    remainder = n;
    cout << "result: " << result << endl;
    cout << "remainder: " << remainder << endl;
}

int while5(int n) {
    int power = 0;
    while (n > 1) {
        n /= 2;
        power++;
    }
    return power;
}

int while7(int n) {
    int k = 0;
    while (k * k <= n) {
        k++;
    }
    return k;
}


int main()
{
    cout << while1(10, 3);
    cout << while2(10, 3);
    while3(100, 15);
    cout << while5(64);
    cout << while7(5);


}


