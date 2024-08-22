#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if(a == c){
        cout << b;
    }
    else if(b == c){
        cout << a;
    }
    else if(a == b){
        cout << c;
    }



    return 0;
}
