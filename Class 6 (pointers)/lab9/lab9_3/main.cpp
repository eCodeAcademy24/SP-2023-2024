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
//Да не се менува main функцијата и да не се користи операторот за пристап до елемент на низа [ ]!

//Input
//20
//23.67
//58.74
//19.06
//47.44
//51.16
//78.15
//75.85
//77.09
//72.90
//20.49
//16.18
//57.16
//12.96
//21.90
//24.00
//26.18
//43.67
//35.94
//13.01
//78.95
//Output
//MAX -> 78.950
//MIN -> 12.960
//0.162 0.694 0.092 0.523 0.579 0.988 0.953 0.972 0.908 0.114 0.049 0.670 0.000 0.135 0.167 0.200 0.465 0.348 0.001 1.000
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
