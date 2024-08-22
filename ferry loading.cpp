#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){

        int n, t, m;
        int time=0, v=0;
        cin >> n >> t >> m;
        int c[m+1];
        c[m] = 100000;
        for(int i=0;i<m;i++) cin >> c[i];

        int i=0;
        while(i < m){
            int totcar;
            totcar++;
            if(totcar == n){
                v++;
                time = c[i] + t*2;
                totcar=0;
            }
            else if((2*t + max(time, c[i])) <= c[i+1]){
                    v++;
                    totcar=0;
                    time += 2*t;
            }
            i++;
        }

    cout << time-10 << " " << v << endl;
    }

    return 0;
}
