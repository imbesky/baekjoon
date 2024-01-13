#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l;
    cin >> l;
    
    int nums[l];
    for (int i = 0;i < l;i++){
        cin >> nums[i];    
    }
    
    int min, max;
    max = min = nums[0];
    for (int i = 1;i < l;i++){
        if (nums[i] > max){
            max = nums[i];
        } else if(nums[i] < min){
            min = nums[i];
        }
    }
    
    cout << min << ' ' << max;
    return 0;
}