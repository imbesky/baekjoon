#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0;i < num;i++){
        cin >> arr[i];
    }
    
    int target;
    cin >> target;
    
    int count = 0;
    for (int i = 0;i < num;i++){
        if (arr[i] == target){
            count++;
        }
    }
    cout << count;
    
    return 0;
}