#include <iostream>
#include <algorithm>

using namespace std;

bool method(int a, int b){
    return a > b;
}

int main(){
    int n;
    cin >> n;
    while(n--){

        int m, c=0;
        cin >> m;
        int p1[m], p2[m];
        for(int i=0;i<m;i++){
            cin >> p1[i];
            p2[i] = p1[i];
        }
        sort(p1, p1+m, method);
        for(int i=0;i<m;i++){
            if(p1[i] == p2[i]) c++;
        }
        cout << c << endl;

    }

    return 0;
}
