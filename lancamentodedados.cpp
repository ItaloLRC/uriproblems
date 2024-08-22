#include <iostream>

using namespace std;

int N, q[12], maior=-1;

int main(){

    cin >> N;

    for(int x=0;x<N;x++){
        int num;
        cin >> num;
        q[num-1]++;
        if(q[num-1] > maior){
            maior = q[num-1];
        }
    }

    for(int x=0;x<12;x++){
        if(q[x] == maior){
            cout << x+1 << " ";
        }
    }



    return 0;
}
