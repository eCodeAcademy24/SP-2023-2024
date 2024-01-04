#include <iostream>

//Да се напише рекурзивна функција f() која за даден природен број ќе
// го пресмета и враќа збирот на сите цифри кои се наоѓаат на парни позиции (гледано од десно кон лево).
// Се смета дека најмалку значајната цифра е на 1-ва позиција. Потоа да се напише програма која за даден природен број n (што се внесува од тастатура)
// ќе ја повика функцијата f() за да го испечати збирот на цифрите кои се наоѓаат на парни позиции во n.
//
//Пример:
//
//Влез:
//
//717623
//
//Излез:
//
//16
//
//Објаснување:
//
//Збирот на цифрите што се наоѓаат на парни позиции во бројот 717623 е 7 + 7 + 2 = 16.

//Input
//12
//Output
//1
using namespace std;

//71762
int f(int broj) {
    if (broj < 10) {
        return broj;
    } else {
        return broj % 10 + f(broj / 100);
    }
}

int main() {

    int n;
    cin >> n;
    cout << f(n / 10);
    return 0;
}
