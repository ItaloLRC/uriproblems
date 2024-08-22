#include <iostream>
#include <set>

using namespace std;

int N, K, U, C[1001][1001], B[1001], S[100001];
bool IsEnd = false;

int main(){

    // Tempo limite excedido =(

    cin >> N >> K >> U;

    set <int> st;

    for(int x=0;x<N;x++){
        for(int y=0;y<K;y++){
            cin >> C[x][y];
        }
    }

    for(int x=0;x<U;x++){
        int num;
        cin >> num;
        st.insert(num);

        if(!IsEnd){

            for(int y=0; y<N ;y++){
            for(int w=0;w<K;w++){
                if(num == C[y][w] and st.find(C[y][w]) != st.end()){
                    B[y]++;
                }
            }
            if(B[y] >= K){
                cout << y+1 << " ";
                IsEnd = true;
            }
        }

        }


    }



    return 0;
}
