#include <iostream>

using namespace std;

int a, b, c;

int main(){

    cin >> a >> b >> c;

    if((c > b and b > a) or c > a + b){
        cout << "1";
    }
    else{
        if(c == a and b == c){
            cout << "3";
        }
        else if((b == c and a < b) or a == b){
            cout << "2";
        }
    }

    return 0;
}
