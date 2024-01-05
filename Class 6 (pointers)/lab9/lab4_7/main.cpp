#include <iostream>
//Од стандарден влез се чита еден природен број n, по што се читаат n цели броеви.
// Да се најде најголемата разлика помеѓу два броја, од вака внесените броеви.
//Input
//5
//1 2 -1 -7 6
//Output
//Najgolema razlika: 13
using namespace std;

void funkcija(int n, int *max, int *min) {
    for (int i = 0; i < n; i++) {
        int broj;
        cin >> broj;

        if (i == 0) {
            *max = broj;
            *min = broj;
            continue;
        }

        if (*max < broj) {
            *max = broj;
        }

        if (*min > broj) {
            *min = broj;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int max = 0, min = 0;
    funkcija(n, &max, &min);

    cout << "Najgolema razlika: " << max - min;
    return 0;
}
