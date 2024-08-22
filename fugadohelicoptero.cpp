#include <iostream>

using namespace std;

int pista[16], h, p, f, d;

int main(){

    cin >> h >> p >> f >> d;

    pista[h] = 1;
    pista[p] = 2;

    while(true){

        f += d;

        if(d == -1 and f == -1){
            f = 15;
        }

        if(d == 1 and f == 16){
            f = 0;
        }

        if(pista[f] == 1){
            cout << "S";
            break;
        }

        if(pista[f] == 2){
            cout << "N";
            break;
        }

    }

    return 0;
}
