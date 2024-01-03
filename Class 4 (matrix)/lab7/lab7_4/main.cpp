#include <iostream>
//Да се дефинираат и имплементираат следните функции:
//
//    int obratenBroj (int broj) - функција која што прима еден аргумент broj и како резултат го враќа неговиот обратен број.
//        пример за бројот 1234, функцијата треба да врати резултат 4321.
//    int sumaNaCifri (int broj) - функција која што прима еден аргумент broj и како резултат ја враќа сумата на цифрите во тој број.
//        пример за бројот 1234, функцијата треба да врати резултат 10 (1+2+3+4 = 10).
//    void pecatiVoInterval (int a, int b) - функција што прима два аргументи a и b, но не враќа никаков резултат.
//    Целта на ова функција е само да ги испечати сите броеви во интервалот од а до b (вклучувајќи ги и нив)
//    за коишто важи дека збирот на бројот и неговиот обратен број е делев со сумата на цифрите на овој збир.
//    Да се искористат првите две функции за имплементирање на оваа функција.

//Input
//990 1010
//Output
//999
//1009
using namespace std;
int obratenBroj(int n) {
    int tmp = 0;
    while (n) {
        int poslednacifra = n % 10;
        tmp = tmp * 10 + poslednacifra;
        n /= 10;
    }
    return tmp;
}

int sumaNaCifri(int n) {
    int suma = 0;
    while (n) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

void interval(int a, int b) {
    int zbir = 0;
    for (int i = a; i <= b; i++) {
        zbir = i + obratenBroj(i);
        if (zbir % sumaNaCifri(zbir) == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    interval(a,b);
    return 0;
}
