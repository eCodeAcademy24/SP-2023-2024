#include <iostream>
//Да се напише рекурзивна функција која што прима еден аргумент - број x која што ќе враќа 1 доколку секоја цифра во бројот е поголема од претходната,
// а во спротивно 0.
//
//Пример бројот 12345 е растечки, додека пак бројот 12325 не е растечки број.
//
//Од стандарден влез се вчитува прво број N, а потоа N броеви. За секој број да се испечати порака DA или NE (во нов ред),
// доколку бројот е растечки или не е растечки.

//Input
//2
//12345
//1236
//Output
//DA
//DA
using namespace std;

int funkcija(int broj) {
    if (broj < 10) {
        return 1;
    } else if (broj % 10 > broj % 100 / 10) {
        return funkcija(broj / 10);
    } else {
        return 0;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int broj;
        cin >> broj;

        if (funkcija(broj)) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
    return 0;
}
