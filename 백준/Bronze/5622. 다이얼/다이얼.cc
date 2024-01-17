#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin >> str;
    int sum = 0;
    for (int sec, i = 0;i < str.size();i++){
        int text = str[i] - 'A';
        if (text < 15){
            sec = (int)(text / 3) + 1;
        } else if (text < 19){
            sec = 6;
        } else if (text < 22){
            sec = 7;
        } else {
            sec = 8;
        }
        sum += sec + 2;
    }
    cout << sum;
}