#include <iostream>
#include <algorithm>

using namespace std;

int j[4];

int main(){

    for(int x=0;x<4;x++){
        cin >> j[x];
    }

    cout << abs((j[3] + j[0]) - (j[2] + j[1]));


    return 0;
}
