#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n;
    cin >> m;
    int b[n] = {0,};
    
    int i, j, k;
    for (int r = 0;r < m;r++){
        cin >> i;
        cin >> j;
        cin >> k;
        for (int index = i - 1;index < j;index++){
            b[index] = k;
        }
    }
    
    for (int r = 0; r < n;r++){
        cout << b[r] << ' ';
    }
    
    return 0;
}