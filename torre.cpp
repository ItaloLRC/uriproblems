#include <iostream>

using namespace std;

int N, sum_l[1001], sum_c[1001], MaxSum=-213, m[1001][1001];

int main(){

    cin >> N;

    for(int l=0;l<N;l++){
        for(int c=0;c<N;c++){
            int v;

            cin >> v;

            m[l][c] = v;
            sum_l[l] += v;
            sum_c[c] += v;

        }
    }

    for(int l=0;l<N;l++){
        for(int c=0;c<N;c++){

            if(sum_l[l] + sum_c[c] - (2 * m[l][c]) > MaxSum){
                MaxSum = sum_l[l] + sum_c[c] - (2 * m[l][c]);
            }

        }
    }

    cout << MaxSum;

    return 0;
}
