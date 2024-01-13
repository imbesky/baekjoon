#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    while(true){
        if(cin >> a && cin >> b){
            cout << a + b << "\n";
        } else {
            return 0;
        }
    }
}