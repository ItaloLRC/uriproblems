#include <iostream>

using namespace std;

int a[3], i, maior=0, TotMin, menor=9999999999;

int main(){

    for(int x=0;x<3;x++){
        cin >> a[x];
    }

    for(int y=0;y<3;y++){
        TotMin = 0;
        for(int x=0;x<3;x++){
            TotMin += a[x] * (abs(y - x) * 2);
        }
        if(TotMin < menor){
            menor = TotMin;
        }
    }

    cout << menor;

    return 0;
}
