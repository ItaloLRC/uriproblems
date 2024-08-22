#include <iostream>

using namespace std;

int v[999], menor=99999999;

int main(){

    for(int x=0;x<10;x++){
        cin >> v[x];
        if(v[x] < menor){
            menor = v[x];
        }
    }

    cout << "Menor: " << menor << endl;

    cout << "Ocorrencias: ";

    for(int x=0;x<10;x++){
        if(v[x] == menor){
            cout << x << " ";
            v[x] = -1;
        }
    }

    cout << endl;

    for(int x=0;x<10;x++){
        cout << v[x] << " ";
    }

    return 0;
}
