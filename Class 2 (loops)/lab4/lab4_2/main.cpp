#include <iostream>
//Од стандарден влез се внесуваат два цели броеви A и P.
//
//Да се испечатат во опаѓачки редослед првите 5 броеви во интервалот (0,A] за коишто важи дека сумата на нивните цифри изнесува P проценти од самиот број.
//
//Ако нема такви броеви во интервалот, да се испечати порака NEMA.

//Input
//100000 25
//Output
//48
//36
//24
//12

using namespace std;

int main() {

    int a, p;
    cin >> a >> p;

    int counter = 0;
    for (int i = a; i > 0; i--) {
        int suma = 0;
        int tmp = i;

        while (tmp) {
            int poslednaCifra = tmp % 10;
            suma += poslednaCifra;
            tmp /= 10;
        }

        if ((suma / (float) i * 100) == p) {
            cout << i << endl;
            ++counter;
        }

        if (counter == 5) {
            break;
        }
    }

    if (counter == 0) {
        cout << "NEMA";
    }


    return 0;
}
