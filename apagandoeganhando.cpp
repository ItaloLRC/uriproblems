#include <iostream>
#include <string>

using namespace std;

int n, d, erased;
string numero, ans;

int main(){

    while(true){
        cin >> n >> d;

        erased = 0;

        if(n == 0 and d == 0){
            return 0;
        }
        cin >> numero;

        for(char c:numero){
            while(ans.size() > 0 and c > ans.back() and erased < d){
                ans.pop_back();
                erased++;
            }
            if(ans.size() < n-d){
                ans.push_back(c);
            }
        }
        cout << ans << endl;
        numero.clear();
        ans.clear();
    }

    return 0;
}
