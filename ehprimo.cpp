#include <iostream>
#include <math.h>

using namespace std;

long long int N;
bool IsPrime = true;

int main(){

    cin >> N;

    for(int x=2;x<(int)sqrt(N);x++){
        if(N % x == 0){
            IsPrime = false;
            break;
        }
    }

    if(N != 1 and IsPrime){
        cout << "S";
    }
    else{
        cout << "N";
    }

    return 0;
}
