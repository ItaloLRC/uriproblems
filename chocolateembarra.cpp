#include <iostream>

using namespace std;

int n, x1, y1, x2, y2;

int main(){

    cin >> n >> x1 >> y1 >> x2 >> y2;

    if((x1 <= n/2 and x2 > n/2) or(x2 <= n/2 and x1 > n/2)){
        cout << "S";
    }
    else if((y1 <= n/2 and y2 > n/2) or (y2 <= n/2 and y1 > n/2)){
        cout << "S";
    }
    else{
        cout << "N";
    }

    return 0;
}
