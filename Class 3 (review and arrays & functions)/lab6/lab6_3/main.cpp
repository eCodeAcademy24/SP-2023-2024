#include <iostream>

#define MAX 100

//За дадена низа од N големина, исчитајте ја истата и потоа:
//
//    Испечатете ја во нејзината оригинална форма
//    Сменете го распоредот на низата во обратна насока
//    Отстранете го секој втор член
//    Повторно сменете го распоредот на низата во обратна насока
//
//За секоја од овие промени испечатете ја низата. За целосни поени работете само со една низа.
//
//Пример:
//
//Влез:
//
//5
//1 2 3 4 5
//
//Излез:
//
//1 2 3 4 5
//
//5 4 3 2 1
//
//5 3 1
//
//1 3 5

using namespace std;

void pecatiNiza(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

void prevrtuvanje(int a[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        int tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
    }
}

int skratiSekojVtor(int a[], int n) {
    for (int i = 1; i < n; i++) {
        a[i] = a[2 * i];
        --n;
    }

    return n;
}


int main() {

    int n;
    cin >> n;

    int a[MAX];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //    Испечатете ја во нејзината оригинална форма
    pecatiNiza(a, n);

    //    Сменете го распоредот на низата во обратна насока
    prevrtuvanje(a, n);

    pecatiNiza(a, n);

    //    Отстранете го секој втор член
    n = skratiSekojVtor(a, n);

    pecatiNiza(a, n);
    //    Повторно сменете го распоредот на низата во обратна насока
    prevrtuvanje(a, n);

    pecatiNiza(a, n);

    return 0;
}
