#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n, m;

    while(cin >> n >> m){
        if(n ==0 and m == 0) break;
        int d[n], k[m], tot;
        long long int gold;
        for(int i=0;i<n;i++) cin >> d[i];
        for(int i=0;i<m;i++) cin >> k[i];
        sort(d, d+n);
        sort(k, k+m);
        for(int i=0, j=0;i<n;i++){
            while(j<m){
                if(k[j] >= d[i]){
                    gold += k[j];
                    tot++;
                    k[j] = 0;
                    break;
                }
                j++;
            }
        }
        if(tot == n) cout << gold << endl;
        else cout << "Loowater is doomed!" << endl;
    }


    return 0;
}
