#include <iostream>
//Да се напише програма во која во даден опсег на природни броеви [a,b], ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2,
// но НЕ се деливи со 3, е поголем од 0 и е делив со 7. На крај да се отпечати и бројот на вакви броеви.
//Input
//1200 2000
//Output
//1248
//1284
//1428
//1482
//1824
//1842
//Vkupno: 6
using namespace std;

void zgolemiZbir(int i, int *zbir) {
    while (i) {
        int poslednaCifra = i % 10;
        if (poslednaCifra % 2 == 0 && poslednaCifra % 3 != 0) {
            *zbir += poslednaCifra;
        }

        i /= 10;
    }
}

void funkcija(int a, int b, int *vkupno) {
    for (int i = a; i <= b; i++) {
        int zbir = 0;
        zgolemiZbir(i, &zbir);

        if (zbir > 0 && zbir % 7 == 0) {
            cout << i << endl;
            ++*vkupno;
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    int vkupno = 0;
    funkcija(a, b, &vkupno);

    cout << vkupno;
    return 0;
}
