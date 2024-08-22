#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if(a == b and b == c){
        cout << "*" << endl;
    }
    else if(a == b and c != a){
        cout << "C" << endl;
    }
    else if(b == c and a != c){
        cout << "A" << endl;
    }
    else if(c == a and b != a){
        cout << "B" << endl;
    }



    return 0;
}
