#include <iostream>
//Да се напише програма во која во даден опсег на природни броеви [m,n],
// ќе се најдат и отпечатат во нов ред сите броеви за кои важи дека збирот на бројот со неговата слика(број кој ги има истите цифри, но во обратен редослед)
// е помал или еднаков на двојната вредност на бројот. На крај да се отпечати и бројот на вакви броеви.

//Input
//1 19
//Output
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//Vkupno: 11
using namespace std;

void svrtiBroj(int i, int *obraten) {
    while (i) {
        *obraten = *obraten * 10 + i % 10;
        i /= 10;
    }
}

//drug nachin
void funkcija(int m, int n, int *brojac) {
    for (int i = m; i <= n; i++) {
        int obraten = 0;
        svrtiBroj(i, &obraten);

        if ((i + obraten) <= 2 * i) {
            cout << i << endl;
            ++*brojac;
        }
    }
}

//eden nachin
//void funkcija(int m, int n, int *brojac) {
//    for (int i = m; i <= n; i++) {
//        int obraten = 0, tmp = i;
//        while (tmp) {
//            obraten = obraten * 10 + tmp % 10;
//            tmp /= 10;
//        }
//        if ((i + obraten) <= 2 * i) {
//            cout << i << endl;
//            ++*brojac;
//        }
//    }
//}



int main() {
    int m, n, i, brojac = 0;
    cin >> m >> n;
    funkcija(m, n, &brojac);
    cout << brojac;
    return 0;


}