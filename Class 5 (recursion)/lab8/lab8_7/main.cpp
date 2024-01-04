#include <iostream>
//Дефинирајте ја рекурзивната функција "sumOfDigits(int number)" така што за дадениот аргумент "number" ќе ја пресмета сумата на сите негови цифри.
// Пример за аргумент "1234" функцијата треба да врати 1 + 2 + 3 + 4 = 10.
//
//Не правете промени во дадената main функција, само дефинирајте ја рекурзивната функција.

//Input
//5
//1234
//123
//12345
//12321
//Output
//10
//6
//15
//9
//9
//49
using namespace std;

int sumOfDigits(int broj) {
    if (broj < 10) {
        return broj;
    } else {
        return broj % 10 + sumOfDigits(broj / 10);
    }
}


int main() {

    int n, i;
    cin >> n;
    int sum = 0;
    for (i = 0; i < n; ++i) {

        int current;
        cin >> current;
        sum += sumOfDigits(current);
        cout << sumOfDigits(current) << endl;
    }
    cout << sum;

    return 0;
}
