#include <iostream>
#include <list>
#include <string>
using namespace std;

int town_search(string map[], int row, int column, int max) {
    if (map[row][column] != '1') {
            return 0;
    }
    map[row][column] = 'P';
    int house = 1;
    if (column < max - 1 && map[row][column + 1] == '1') {
        house += town_search(map, row, column + 1, max);
    }
    if (row < max - 1 && map[row + 1][column] == '1') {
        house += town_search(map, row + 1, column, max);
    }
    if (column > 0 && map[row][column - 1] == '1') {
           house += town_search(map, row, column - 1, max);
    }
    if (row > 0 && map[row - 1][column] == '1') {
        house += town_search(map, row - 1, column, max);
    }
    return house;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string map[n];
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }
    
    int town = 0;
    list<int> houses;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == '1') {
                town++;
                houses.push_back(town_search(map, i, j, n));
      }
    }
  }

    houses.sort();
    cout << town;
    while (!houses.empty()) {
        cout << "\n" << houses.front();
        houses.pop_front();
    }
}