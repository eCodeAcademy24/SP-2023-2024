#include <iostream>
//За дадена квадратна матрица со големина N, најдете ја разликата помеѓу главната и споредната дијагонала,
// а потоа разликата помеѓу првата колона и последната колона на матрицата.
//
//Пример:
//
//Влез: 3
//
//1 2 3
//
//1 1 1
//
//2 2 2
//
//Излез:
//
//-2
//
//-2

//Input
//5
//1 2 3 4 5
//9 8 7 6 5
//3 2 4 1 5
//6 6 6 6 0
//4 4 4 4 4
//Output
//-2
//4
using namespace std;

int main() {
    int n, a[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int suma1 = 0, suma2 = 0, suma3 = 0, suma4 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                suma1 = suma1 + a[i][j];
            }
            if (i + j == n - 1) {
                suma2 = suma2 + a[i][j];
            }
            if (j == 0) {
                suma3 = suma3 + a[i][j];
            }
            if (j == n - 1) {
                suma4 = suma4 + a[i][j];
            }
        }
    }
    cout << suma1 - suma2 << endl;
    cout << suma3 - suma4;
    return 0;
}
