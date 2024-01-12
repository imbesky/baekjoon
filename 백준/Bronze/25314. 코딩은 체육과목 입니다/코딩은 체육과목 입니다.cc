#include <iostream>
using namespace std;

int main()
{
    int data;
    cin >> data;
    
    for (int i = 0;i < (data - 4) / 4;i++){
        cout << "long ";
    }
    
    cout << "long int";
    
    return 0;
}