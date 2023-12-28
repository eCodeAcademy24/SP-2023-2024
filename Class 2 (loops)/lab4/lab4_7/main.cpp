#include <iostream>
//Од стандарден влез се чита еден природен број n, по што се читаат n цели броеви. Да се најде најголемата разлика помеѓу два броја, од вака внесените броеви.

//Input
//5
//1 2 -1 -7 6
//Output
//Najgolema razlika: 13

using namespace std;

int main() {
    int n, max, min;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        if (i == 0) {
            max = j;
            min = j;
            continue;
        }

        if (j > max) {
            max = j;
        }
        if (j < min) {
            min = j;
        }

    }

    cout << "Najgolema razlika: " << max - min;
    return 0;
}
