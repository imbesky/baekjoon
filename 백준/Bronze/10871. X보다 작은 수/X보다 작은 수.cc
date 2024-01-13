#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int length;
    cin >> length;
    
    int standard;
    cin >> standard;
    
    int nums[length];
    for (int i = 0; i < length;i++){
        cin >> nums[i];
    }
    
    for (int i = 0; i < length;i++){
        if (nums[i] < standard){
            cout << nums[i] << ' ';
        }
    }
    return 0;
}