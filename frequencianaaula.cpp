#include <iostream>
#include <set>

using namespace std;

int N;

int main(){

    cin >> N;

    set <int> V;

    for(int x=0;x<N;x++){
        int atp;
        cin >> atp;

        V.insert(atp);
    }

    cout << V.size();

    return 0;
}
