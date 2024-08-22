#include <iostream>
#include <algorithm>

struct Agency{

    char name;
    int a;
    int b;
    int cost=0;

};
bool sorteamento(Agency a, Agency b){
    return a.cost < b.cost;
}

using namespace std;

int main(){
    int n, m, l;
    cin >> n >> m >> l;
    Agency ag[l];

    for(int i=0;i<l;i++){
        cin >> ag[i].name >> ag[i].a >> ag[i].b;
        int aux = n;
        while(aux != m){
            if(ag[i].a > (ag[i].b/(aux/2)) and (aux/2 >= m)){
                ag[i].cost += ag[i].b;
                aux /= 2;
            }
            else{
                ag[i].cost += ag[i].a;
                aux--;
            }
        }
    }
    sort(ag, ag+l, sorteamento);
    for(int i=0;i<l;i++){
        cout << ag[i].name << " " << ag[i].cost << endl;
    }


    return 0;
}
