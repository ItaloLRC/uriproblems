#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string s, t;
    cin >> s >> t;
    int v[s.length()] = {0};

    for(int i=0, j=0;i<t.length();i++){
        if(s[j] == t[i]){
            v[j] = 1;
            j++;
        }
    }
    if(v[s.length() - 1] == 0) cout << "No";
    else cout << "Yes";
    return 0;
}
