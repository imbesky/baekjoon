#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string stars;
    stars.reserve(n * 2);
    
    for(int i = 0;i < n;i++){
        stars.clear();
        for(int j = 0;j < i + 1;j++){
            stars += "*";
        }
        cout << setw(n) << stars << "\n";
    }
    return 0;
}