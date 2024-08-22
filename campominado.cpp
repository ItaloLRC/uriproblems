#include <iostream>

using namespace std;

int t[51];

int main(){

    int n;

    cin >> n;

    for(int x=0;x<n;x++){
        cin >> t[x];
    }

    for(int x=0;x<n;x++){
        int cont = 0;

        cont = t[x-1] + t[x] + t[x+1];

        cout << cont << endl;
    }

    return 0;
}
