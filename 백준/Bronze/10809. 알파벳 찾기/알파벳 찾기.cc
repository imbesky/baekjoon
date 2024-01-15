#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin >> str;
    int result[26];
    fill_n(result, 26, -1);
    int start_index = 'a' - '0';

    for(int i = 0;i < str.length();i++){
        int curr_index = str[i] - '0';
        if (result[curr_index - start_index] == -1){
            result[curr_index - start_index] = i;
        }
    }
    for(int i = 0;i < sizeof(result) / sizeof(int);i++){
        cout << result[i] << ' ';
    }
}