#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int l;
        string str;
        cin >> l;
        cin >> str;
        for(int j = 0;j < str.size();j++){
            for(int k = 0;k < l;k++){
                cout << str[j];
            }
        }
        cout << "\n";
    }
}