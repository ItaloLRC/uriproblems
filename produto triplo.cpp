#include <iostream>
#include <algorithm>

using namespace std;

long long int N, Sum=1, V[1000000];

int main(){

    cin >> N;

    for(int X=0;X<N;X++){
        cin >> V[X];
    }

    long long int triplo1 = V[0] * V[1] * V[N-1];
    long long int triplo2 = V[N-1] * V[N-2] * V[N-3];

    cout << max(triplo1, triplo2);


}
