#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a;
    cin >> b;
    while(true){
        cout << a + b << "\n";
        cin >> a;
        cin >> b;
        if(a == 0 && a == b){
            break;
        }
    }
    return 0;
}