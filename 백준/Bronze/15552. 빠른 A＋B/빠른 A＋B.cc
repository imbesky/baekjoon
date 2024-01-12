#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 0;i < num;i++){
        int a, b;
        cin >> a;
        cin >> b;
        cout << a+b << "\n";
    }
    return 0;
}