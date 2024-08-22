#include <iostream>

using namespace std;

int N, A, TotA, JaFoi = 0;

int main(){

    cin >> N;

    for(int x=1;x<=N;x++){
        cin >> A;

        TotA += A;

        if((TotA >= 1000000) and (JaFoi == 0)){
            cout << x;
            JaFoi = 1;
        }

    }


    return 0;
}
