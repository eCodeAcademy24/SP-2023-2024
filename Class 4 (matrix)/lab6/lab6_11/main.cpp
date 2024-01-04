#include <iostream>
//Од стандарден влез се чита позитивен непарен број n (n е најмалку 3) кој ги дава димензиите на квадратната матрица од цели броеви,
// која се чита во продолжение. Да се напише програма која од таа матрица(макс. 100 x 100) ќе креира нова матрица 2 x 2,
// која ќе ги има за елементи збировите на елементите на регионите на првата матрица, соодветно.
// Во продолжение на сликата може да видиме како се добиваат регионите за матрица кога n = 5.
//
//
//За оваа матрица, резултантната матрица би била:
//
//17 28
//16 28

//Input
//5
//-1 2 3 4 9
//2 2 8 -1 7
//0 1 2 3 4
//-1 -1 -1 2 5
//0 2 5 -9 1
//Output
//5 19
//0 -1
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int reg1 = 0;
    int reg2 = 0;
    int reg3 = 0;
    int reg4 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < n / 2 && j < n / 2) { // region 1
                reg1 += matrix[i][j];
            } else if (i < n / 2 && j > n / 2) { // region 2
                reg2 += matrix[i][j];
            } else if (i > n / 2 && j < n / 2) { // region 3
                reg3 += matrix[i][j];
            } else if (i > n / 2 && j > n / 2) { // region 4
                reg4 += matrix[i][j];
            }
        }
    }

    cout << reg1 << " " << reg2 << endl << reg3 << " " << reg4;
    return 0;
}
