#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n;
    cin >> m;
    
    int nums[n];
    for(int i = 0;i < n;i++){
        nums[i] = i + 1;
    }
    for(int s, e, i = 0;i < m;i++){
        cin >> s;
        s--;
        cin >> e;
        e--;
        for(int temp, c = 0;c < (e - s + 1) / 2;c++){
            temp = nums[s + c];
            nums[s + c] = nums[e - c];
            nums[e - c] = temp;
        }
    }
    for(int i = 0;i < n;i++){
        cout << nums[i] << ' ';
    }
}