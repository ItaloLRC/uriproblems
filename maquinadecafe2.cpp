#include <iostream>

using namespace std;

int qtdAndar[3], Tempo[3], menor;

int main(){

    cin >> qtdAndar[0] >> qtdAndar[1] >> qtdAndar[2];

    Tempo[0] = qtdAndar[1] * 2 + qtdAndar[2] * 4;
    Tempo[1] = qtdAndar[0] * 2 + qtdAndar[2] * 2;
    Tempo[2] = qtdAndar[0] * 4 + qtdAndar[1] * 2;

    menor = min(Tempo[0], min(Tempo[1], Tempo[2]));

    cout << menor << endl;

    return 0;
}
