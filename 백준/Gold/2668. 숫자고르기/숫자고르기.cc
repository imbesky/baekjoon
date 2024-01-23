#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    bool num_set[n];
    for (int i = 0;i < n;i++){
        cin >> num[i];
        num_set[i] = false;
    }
    
    for (int i = 0;i < n;i++){
        if (num[i] == i + 1){
            num_set[num[i] - 1] = true;
        } else if (num[num[i] - 1] == i + 1) {
            num_set[num[i] - 1] = true;
        } else {
            list<int> temp;
            temp.push_back(num[i]);
            int index = num[i] - 1;
            while(true){
                if (num[index] == index + 1 || num[num[index] - 1] == index + 1){
                    temp.clear();
                    break;
                } else if (num[index] == i + 1){
                    temp.push_back(num[index]);
                    break;
                } else if (temp.size() == n){
                    temp.clear();
                    break;
                } else if (num[index] != temp.back() && 
                          find(temp.begin(), temp.end(), num[index]) != temp.end()){
                    temp.clear();
                    break;
                }
                temp.push_back(num[index]);
                index = num[index] - 1;
            }
            for (int t : temp){
                num_set[t - 1] = true;
            }
        }
    }
    int count = 0;
    for (int i = 0;i < n;i++){
        if (num_set[i]){
            count++;
        }
    }
    cout << count;
    for (int i = 0;i < n;i++){
        if (num_set[i]){
            cout << "\n" << i + 1;
        }
    }
}