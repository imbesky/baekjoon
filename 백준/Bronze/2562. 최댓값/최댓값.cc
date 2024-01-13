#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int max;
    cin >> max;
    int index = 1;
    
    int n;
    for (int i = 0;i < 8;i++){
        cin >> n;
        if (n > max){
            max = n;
            index = i + 2;
        }
    }
    
    cout << max << "\n" << index;
    return 0;
}