#include <iostream>

using namespace std;

int ia, ib, fa, fb;

int main(){

    cin >> ia >> ib >> fa >> fb;

    if(ia == fa and ib == fb){
        cout << "0";
    }
    else if(ia == ib and fa == fb and fa != ib){
        cout << "1";
    }
    else if(ia != fa and ib == fb){
        cout << "1";
    }
    else if(ia == fa and ib != fb){
        cout << "2";
    }
    else if(ia != fa and ib != fb and ib != ia){
        cout << "1";
    }


    return 0;
}
