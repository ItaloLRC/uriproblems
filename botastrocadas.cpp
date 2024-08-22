#include <iostream>

using namespace std;

int n, bota[2][61], cont;

int main(){

    cin >> n;

    for(int x=0;x<n;x++){
        int num;
        char l;
        cin >> num >> l;
        if(l == 'D'){
            bota[0][num]++;
        }
        else{
            bota[1][num]++;
        }
    }

    for(int x=0;x<61;x++){
        cont += min(bota[0][x], bota[1][x]);
    }


    cout << cont;

    return 0;
}
