#include <iostream>

using namespace std;

int q[100000], n, cor[100000];

int main(){

    cin >> n;

    for(int x=1;x<=n;x++){
        cin >> q[x];
    }

    int cont = 0;
    bool passou = false;

    for(int x=1;x<=n;x++){
        if(q[x] == 0){
            cor[x] == 0;
            passou = true;
            cont = 0;
        }
        else if(passou){
            cont++;
            if(cont > 9){
                cont = 9;
            }
            cor[x] = cont;
        }
        else if(!passou){
            cor[x] = 99;
        }

    }

    cont = 0;
    passou = false;

    for(int x=n;x>=1;x--){
        if(q[x] == 0){
            cor[x] == 0;
            passou = true;
            cont = 0;
        }
        else if(passou){
            cont++;
            if(cont > 9){
                cont = 9;
            }
            if(cor[x] > cont){
                cor[x] = cont;
            }
        }

    }


    for(int x=1;x<=n;x++){
        cout << cor[x] << " ";
    }




    return 0;
}
