#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    while(1){

        int n;
        cin >> n;
        if(n ==0){
            break;
        }

        int a[n+1], bi[n+1], si[n+1];
        int cont1=0, cont2=0;
        long long int dist=0;

        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i] >= 0){
                bi[cont1] = i;
                cont1++;
            }
            else{
                si[cont2] = i;
                cont2++;
            }
        }

        for(int i=0, j=0;i<cont1;i++){
            while(a[bi[i]] > 0){
                int wine = min(a[bi[i]], -a[si[j]]);
                dist += wine * abs(bi[i] - si[j]);
                a[si[j]] += wine;
                a[bi[i]] -= wine;
                if(a[si[j]] == 0){
                    j++;
                }
            }
        }

        cout << dist << endl;

    }


    return 0;
}
