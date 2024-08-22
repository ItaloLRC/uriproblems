#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, md;
        cin >> n;
        int p[n];
        for(int i =0;i<n;i++){
            cin >> p[i];
        }
        sort(p, p+n);
        for(int i=0; i<n;i++){
            if(i % 3 == 0 and i+2 < n){
                md += p[i];
            }
        }
        cout << md << endl;
    }


    return 0;
}
