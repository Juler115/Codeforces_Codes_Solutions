#include <bits/stdc++.h>
using namespace std;

int n = 30;

vector<int> xs(n);
vector<int> ans;
int mini = INT_MAX;

unsigned generateSeed(int iteration) {
    return static_cast<unsigned>(iteration * 12345);
}

vector<int> generarSolucionInicial() {
    vector<int> solucion(n);
    for (int i = 0; i < n; i++) {
        solucion[i] = rand() % 2;
    }
    return solucion;
}

vector<int> generarSolucionVecina(const vector<int>& solucionActual) {
    vector<int> solucionVecina = solucionActual;
    int indice = rand() % n;  
    solucionVecina[indice] = 1 - solucionVecina[indice];
    return solucionVecina;
}

int evaluarSolucion(const vector<int>& solucion) {
    int aux = 30;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += solucion[i];
    }
    aux -= sum;
    int multi = 1;
    for (int i = 1; i < n; i++) {
        multi *= solucion[i];
    }
    multi *= 31;
    aux += multi;
    return aux;
}

void solve() {
    static int iteration = 9;
    unsigned seed = generateSeed(iteration++);
    std::mt19937 gen(seed);

    vector<int> solucionActual = generarSolucionInicial();
    int auxActual = evaluarSolucion(solucionActual);

    for (int i = 0; i < 100; i++) {  
        vector<int> solucionVecina = generarSolucionVecina(solucionActual);
        int auxVecina = evaluarSolucion(solucionVecina);

        if (auxVecina < auxActual || (rand() / double(RAND_MAX)) < exp(-(auxVecina - auxActual) / 100.0)) {
            solucionActual = solucionVecina;
            auxActual = auxVecina;
        }
    }

    if (auxActual < mini) {
        mini = auxActual;
        ans = solucionActual;
    }
    cout << "Solucion minima con valores:\n";
    for (auto a : ans) cout << a;
    cout << "\n";
    cout << "Obtiene un valor mínimo: " << mini << "\n\n";
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t = 10000;

    while (t--) solve();

    return 0;
}
