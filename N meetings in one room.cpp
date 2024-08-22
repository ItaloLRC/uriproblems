#include <iostream>
#include <algorithm>

using namespace std;

struct Meeting{
    int e;
    int s;

};

bool sorteamento(Meeting a, Meeting b){
    return a.e < b.e;
}

int main(){

    int n, tm=0;
    cin >> n;
    Meeting m[n];
    for(int i=0;i<n;i++) cin >> m[i].s >> m[i].e;

    sort(m, m+n, sorteamento);

    int ft=-1;

    for(int i=0;i<n;i++){

       if(m[i].s > ft){
            tm++;
            ft = m[i].e;
       }

    }

    cout << tm << endl;

    return 0;
}
