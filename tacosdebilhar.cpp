#include <iostream>
#include <set>

using namespace std;

int c, qtd;

int main(){

    set <int> s;

    cin >> c;

    for(int x=0;x<c;x++){
        int num;
        cin >> num;
        if(s.find(num) == s.end()){
            qtd += 2;
            s.insert(num);
        }
        else{
            s.erase(num);
        }

    }

    cout << qtd;

    return 0;
}
