#include <iostream>
using namespace std;
int main() {
    
    int i, j, n;
    string s;
    double t;
    bool scambio;
    cout << "Quanti studenti ci sono in una classe?" << endl;
    cin >> n;
    double p[n];
    double voti[n];
    string nomi[n];
    i = 0;
    while (i < n) {
        cout << "Nome studente" << endl;
        cin >> nomi[i];
        cout << "Voto studente" << endl;
        cin >> voti[i];
        i = i + 1;
    }
    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) {
        j = 0;
        scambio = false;
        while (i <= n - 2 - i) {
            if (voti[j] > voti[j + 1]) {
                t = voti[i];
                voti[i] = voti[j + 1];
                voti[j + 1] = t;
                s = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = s;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << nomi[i] << " " << p[i] << endl;
        i = i + 1;
    }
    return 0;
}