#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string max = (stoi(a) > stoi(b)) ? a : b;
    cout << max;
}