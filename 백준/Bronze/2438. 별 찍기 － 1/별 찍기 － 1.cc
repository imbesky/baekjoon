#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 0;i < num;i++){
        for(int j = 0;j < i + 1;j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}