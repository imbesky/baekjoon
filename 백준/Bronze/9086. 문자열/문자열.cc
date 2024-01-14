#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string s;
    for(int i = 0;i < n;i++){
        cin >> s;
        cout << s.front() << s.back() << "\n";
    }
}