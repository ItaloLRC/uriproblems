#include <iostream>

using namespace std;

int main(){

    int t1, t2, t3;

    cin >> t1 >> t2 >> t3;

    if(t1 < t2 and t1 < t3){
        cout << "1" << endl;
        if(t2 < t3){
            cout << "2" << endl << "3";
        }
        else{
            cout << "3" << endl << "2";
        }
    }
    else if(t2 < t1 and t2 < t3){
        cout << "2" << endl;
        if(t1 < t3){
            cout << "1" << endl << "3";
        }
        else{
            cout << "3" << "1";
        }
    }
    else{
        cout << "3" << endl;
        if(t2 < t1){
            cout << "2" << endl << "1";
        }
        else{
            cout << "1" << endl << "2";
        }
    }

    return 0;
}
