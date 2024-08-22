#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int c, s, sum, imbalance;
    cin >> c >> s;

    int sm[c*2];

    for(int i=0;i<s;i++){
        cin >> sm[i];
        sum += sm[i];
    }

    for(int i=s;i<c*2;i++) sm[i] = 0;

    sort(sm, sm+c*2);
    sum /= c;
    cout << "Set #" << 1 << endl;
    for(int i=0;i<c;i++){
        cout << i << ": ";
        if(sm[i] != 0) cout << sm[i] << " " << sm[c*2 - i - 1];
        else cout << sm[c*2 - i - 1];
        cout << endl;
    }
    cout << endl;
    return 0;
}
