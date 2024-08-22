#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
    int a, b;
};

int main(){
    int n, tot;
    while(cin >> n){
        if(n == 0) break;
        Student s[n];

        for(int i=0;i<n;i++){
            cin >> s[i].a >> s[i].b;
        }
        if(n % 2 == 0){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(s[i].a == s[j].b and s[i].b == s[j].a and s[i].a != -1){
                        tot++;
                        s[i].a = -1;
                        s[i].b = -1;
                        s[j].a = -1;
                        s[j].b = -1;
                        cout << tot << endl;
                    }
                }
            }
        }

        if(tot == n/2 and n % 2 == 0) cout << "YES";
        else cout << "NO";
    }

    return 0;
}
