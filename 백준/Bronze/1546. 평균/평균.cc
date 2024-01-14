#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int score[n];
    int max = 0;
    for(int i = 0;i < n;i++){
        cin >> score[i];
        if (score[i] > max){
            max = score[i];
        }
    }
    
    double average = 0;
    for(int i = 0;i < n;i++){
        average += score[i] * 100.0 / max;
    }
    average /= n;
    cout << average;
}