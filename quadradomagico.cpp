#include <iostream>

using namespace std;

int n, li[12], co[12], d[2], valor;
bool qm = true;

int main(){

    cin >> n;

    for(int l=0;l<n;l++){
        for(int c=0;c<n;c++){
            cin >> valor;
            li[l] += valor;
            co[c] += valor;
            if(c == l){
                d[0] += valor;
            }
            if(c + l == n - 1){
                d[1] += valor;
            }

        }
    }

    for(int x=0;x<n;x++){
        if((li[x] != co[x]) or (li[x] != d[0]) or (li[x] != d[1])){
            qm = false;
        }
    }

    if(qm){
        cout << li[0];
    }
    else{
        cout << "-1";
    }


    return 0;
}
