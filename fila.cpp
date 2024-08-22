#include <iostream>
#include <set>

using namespace std;

int N, M, fila[51000];

int main(){

    set <int> fora;

    cin >> N;

    for(int x=0;x<N;x++){
        cin >> fila[x];
    }

    cin >> M;

    for(int x=0;x<M;x++){
        int p;
        cin >> p;
        fora.insert(p);
    }

    for(int x=0;x<N;x++){
        if(fora.find(fila[x]) ==  fora.end() ){
            cout << fila[x] << " ";
        }

    }



    return 0;
}
