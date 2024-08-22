#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    int n=0, l=0, c=0;

    while(scanf("%d %d %d", &n, &l, &c) != EOF){
        string w[n];
        long int nump = 1, numl=1, numc=0;
        for(int i=0;i<n;i++){
            cin >> w[i];
            if((numc + w[i].length()) > c){
                numc = w[i].length();
                if(numl + 1 <= l){
                    numl++;
                }
                else{
                    numl=1;
                    nump++;
                }
            }
            else if((numc + w[i].length()) <= c){
                numc += w[i].length();
            }
            if((numc + 1) < c and i != n-1){
                numc++;
            }
            else if((numc +1) >= c){
                numc = 0;
                if(numl + 1 <= l){
                    numl++;
                }
                else{
                    numl=1;
                    nump++;
                }
            }
        }
        cout << nump << endl;
    }
    return 0;
}
