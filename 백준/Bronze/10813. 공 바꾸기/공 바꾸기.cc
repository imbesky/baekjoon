#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n;
    cin >> m;
    int b[n];
    for (int i = 0;i < n;i++){
        b[i] = i + 1;
    }
    
    int x, y;
    int temp;
    for (int i = 0;i < m;i++){
        cin >> x;
        cin >> y;
        x--;
        y--;
        temp = b[x];
        b[x] = b[y];
        b[y] = temp;
    }
    
    for (int i = 0;i < n;i++){
        cout << b[i] << ' ';
    }
    
    return 0;
}