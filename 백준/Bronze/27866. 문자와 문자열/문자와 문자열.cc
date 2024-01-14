#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    int i;
    cin >> s;
    cin >> i;
    cout << s.at(i - 1);
}