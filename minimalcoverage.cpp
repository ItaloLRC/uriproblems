#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int n;
    vector <int> v;
    cin >> n;
    while(n--){

        int m, i=0, nump=0;
        int lr[100001];
        cin >> m;
        while(1){
            int aux1, aux2;
            cin >> aux1 >> aux2;
            if(aux1 == 0 and aux2 == 0) break;
            if(aux1 == 0) lr[i] = aux2, i++;
        }
        sort(lr, lr+i);
        int maxrange = i;
        i=0;
        for(int j=1;j<=m;j++){
            while(i < maxrange){
                if(lr[i] == j){
                    nump++;
                    break;
                }
                i++;
            }
        }
        if(nump == m){
            cout << nump << endl;
            v.push_back(nump);
        }
        else{
            cout << 0 << endl;
            v.push_back(0);
        }
    }
    for(int k=0;k<v.size();k++){
        cout << v[k] << " ";
    }
    cout << endl;

    return 0;
}
