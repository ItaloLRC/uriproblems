#include <iostream>
#include <algorithm>

using namespace std;

bool method(string a, string b){
    return a.length() > b.length();
}

int main(){

    int n;
    cin >> n;

    while(n--){

        string s[51];
        int c=0;
        for(int i=0 ;i<10;i++) cin >> s[i], c++;

        sort(s, s+c, method);

        for(int i=0 ;i<c;i++) cout << s[i] << " ";
        cout << endl;
    }


}
