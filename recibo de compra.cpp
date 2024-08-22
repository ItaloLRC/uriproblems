// Dynamic Programming
#include <iostream>
#include <cstring>

using namespace std;

int dp[120][24][120] = {0};
int r, k;

int recibo(int value, int qtd, int smaller){

    if(dp[value][qtd][smaller] != -1){
        return dp[value][qtd][smaller];
    }

    if(value == 0){
        if(qtd == 0){
            return dp[value][qtd][smaller] = 1;
        }
        else{
            return dp[value][qtd][smaller] = 0;
        }
    }
    else{
        if(qtd == 0){
            return dp[value][qtd][smaller] = 0;
        }
    }

    dp[value][qtd][smaller] = 0;

    for(int i=1; i<min(value+1, smaller); i++){
        dp[value][qtd][smaller] += recibo(value-i, qtd-1, i);
    }

    return dp[value][qtd][smaller];

}

int main(){

    cin >> r >> k;

    memset(dp, -1, sizeof(dp));

    cout << recibo(r, k, r+1);

    return 0;
}
