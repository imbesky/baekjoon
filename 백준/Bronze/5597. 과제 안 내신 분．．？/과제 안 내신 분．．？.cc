#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    bool done[30] = {false};
    for (int s, i = 0;i < 28;i++){
        cin >> s;
        done[s - 1] = true;
    }
    
    int not_done[2];
    for (int i = 0, j = 0;i < 30 || j < 2;i++){
        if (!done[i]){
            not_done[j] = i + 1;
            j++;
        }
    }
   
    int min = (not_done[0] > not_done[1]) ? not_done[1] : not_done[0];
    int max = (not_done[0] < not_done[1]) ? not_done[1] : not_done[0];
    cout << min << "\n" << max;
    
    return 0;
}