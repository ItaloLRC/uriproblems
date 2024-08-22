#include <iostream>
#include <algorithm>

using namespace std;

struct Paciente{

    int inicio, fim;

};

bool sorteamento(Paciente a, Paciente b){
    return a.fim < b.fim;
}

int N, TotC;

int main(){

    cin >> N;
    Paciente p[N+1];

    for(int x=0;x<N;x++){
        int i, f;
        cin >> i >> f;

        p[x].inicio = i;
        p[x].fim = f;

    }

    sort(p, p+N, sorteamento);
    int FimC = -1;

    for(int x=0;x<N;x++){

        if(p[x].inicio >= FimC){
            TotC++;
            FimC = p[x].fim;
        }
    }
    cout << TotC;

    return 0;
}
