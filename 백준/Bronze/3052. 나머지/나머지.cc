#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int rest[10];
    int count = 0;
    for (int n, i = 0, c = 0;i < 10;i++, c = 0){
        cin >> n;
        n %= 42;
        for(int j = 0;j < count;j++, c++){
            if(rest[j] == n){
                break;
            }
        }
        if (c == count){
            rest[count] = n;
            count++;
        }
    }
    
    cout << count;
}