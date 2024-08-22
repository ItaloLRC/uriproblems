#include <iostream>
#include <algorithm>

using namespace std;

int n, e[3], qtd;


int main(){

    cin >> n;

    cin >> e[0] >> e[1] >> e[2];

    sort(e, e+3);

    for(int x=0;x<3;x++){
        if(e[x] <= n){
            n -= e[x];
            qtd++;
        }
        else{
            break;
        }
    }


    cout << qtd;

    return 0;
}
