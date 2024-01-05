#include <iostream>
//Да се напишат следните функции за работа со низи од децимални броеви:
//
//    Функцијата double max (double * niza, int n), што како резултат ќе го врати максимумот во низата niza со n елементи.
//    Функцијата double min (double * niza, int n), што како резултат ќе го врати минимумот во низата niza со n елементи.
//
//    Функцијата void normalize (double * niza, int n), што ќе го нормализира секој елемент од низата по следната формула:
//
//    x = (x-min(niza)) / (max(niza) - min(niza))
//
//    Функција void sort (double * niza, int n) што ќе ја сортира низата во опаѓачки редослед!
//
//Да не се менува main функцијата и да не се користи операторот за пристап до елемент на низа [ ]!

//Input
//10
//36.08
//40.72
//20.41
//79.23
//41.84
//79.78
//59.29
//29.07
//44.22
//44.90
//Output
//MAX -> 79.780
//MIN -> 20.410
//1.000 0.991 0.655 0.412 0.401 0.361 0.342 0.264 0.146 0.000
using namespace std;

double max(double *niza, int n) {
    double max = *(niza);
    for (int i = 0; i < n; i++) {
        if (*(niza + i) > max) {
            max = *(niza + i);
        }
    }

    return max;
}

double min(double *niza, int n) {
    double min = *(niza);
    for (int i = 0; i < n; i++) {
        if (*(niza + i) < min) {
            min = *(niza + i);
        }
    }

    return min;
}

//   x = (x-min(niza)) / (max(niza) - min(niza))
void normalize(double *niza, int n) {
    double minN = min(niza, n);
    double maxN = max(niza, n);

    for (int i = 0; i < n; i++) {
        double x = (*(niza + i) - minN) / (maxN - minN);
        *(niza + i) = x;
    }
}

void sort(double *niza, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(niza + i) < *(niza + j)) {
                swap(*(niza + i), *(niza + j));
//                double tmp = *(niza + i);
//                *(niza + i) = *(niza + j);
//                *(niza + j) = tmp;
            }
        }
    }
}

int main() {
    double niza[200];
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> niza[i];
    }
    printf("MAX -> %.3f\n", max(niza, n));
    printf("MIN -> %.3f\n", min(niza, n));
    normalize(niza, n);
    sort(niza, n);
    for (i = 0; i < n; i++) {
        cout << niza[i] << " ";
    }
    return 0;
}