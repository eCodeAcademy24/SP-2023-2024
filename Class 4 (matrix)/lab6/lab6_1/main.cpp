#include <iostream>
//Да се напише програма во која се вчитува матрица (со димензии M и N, 1 < M,N <= 100) од цели броеви.
//
//Сите елементи од матрицата се поставени на вредност 0 или 1.
//
//Да се формира нова матрица така што на местото на сите елементи што имаат вредност 0,
// треба да се смести бројот на елементи со вредност 1 околу тој елемент во сите осум насоки.
//
//Новодобиената матрица да се отпечати на стандарден излез, при што наместо елементите со вредност 1 од оригиналната матрица ќе се отпечати знак *.
//
//Пример влез:
//
//4 5
//1 0 0 1 0
//0 0 1 1 1
//0 1 0 0 1
//1 1 0 1 0
//
//излез:
//
//* 2 3 * 3
//2 3 * * *
//3 * 5 5 *
//* * 3 * 2
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int counter = 0;
            if (matrix[i][j] == 0) {
                if (matrix[i + 1][j] == 1) { // dolen sosed
                    ++counter;
                }

                if (matrix[i + 1][j + 1] == 1) { // dolen desen sosed
                    ++counter;
                }

                if (matrix[i + 1][j - 1] == 1) { // dolen lev sosed
                    ++counter;
                }

                if (matrix[i][j + 1] == 1) { // desen sosed
                    ++counter;
                }

                if (matrix[i][j - 1] == 1) { // lev sosed
                    ++counter;
                }

                if (matrix[i - 1][j - 1] == 1) { // goren lev sosed
                    ++counter;
                }

                if (matrix[i - 1][j] == 1) { // goren sosed
                    ++counter;
                }

                if (matrix[i - 1][j + 1] == 1) { // goren desen sosed
                    ++counter;
                }

                cout << counter << " ";
            } else {
                cout << "* ";
            }
        }

        cout << endl;
    }
    return 0;
}
