#include <iostream>

using namespace std;

int rekurzivno(int n, int obraten) {
    if (n == 0) {
        return obraten;
    } else {
        return rekurzivno(n / 10, obraten * 10 + n % 10);
    }
}

int main() {
    int n;
    cin >> n;

    int obraten = 0;
    cout << rekurzivno(n, obraten);
    return 0;
}

