#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void traversal(char** map, int currentrows, int currentcolumns, int* count, int rows, int columns) {
    if (*count > rows*columns*2) {
        cout << "Lost" << endl;
        return;
    }
    if ((currentrows < 0) || (currentrows >= rows)) {
        cout << "Out" << endl;
        return;
    }
    if ((currentcolumns < 0) || (currentcolumns >= columns)) {
        cout << "Out" << endl;
        return;
    }
    if (map[currentrows][currentcolumns] == 'N') {
        *count += 1;
        traversal(map, currentrows - 1, currentcolumns, count, rows, columns);
    } else if (map[currentrows][currentcolumns] == 'S') {
        *count += 1;
        traversal(map, currentrows + 1, currentcolumns, count, rows, columns);
    } else if(map[currentrows][currentcolumns] == 'W') {
        *count += 1;
        traversal(map, currentrows, currentcolumns - 1, count, rows, columns);
    } else if(map[currentrows][currentcolumns] == 'E') {
        *count += 1;
        traversal(map, currentrows, currentcolumns + 1, count, rows, columns);
    } else if(map[currentrows][currentcolumns] == 'T') {
        cout << *count << endl;
        return;
    } else {
        cout << "Lost" << endl;
        return;
    }
}

int main() {
    int rows, columns;
    int count = 0;
    cin >> rows >> columns;
    char** map = (char**) calloc(rows + 1, sizeof(char*));
    for (long i = 0; i < rows; i++) {
        map[i] = (char*) calloc(columns + 1, sizeof(char));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> map[i][j];
        }
    }
    traversal(map, 0, 0, &count, rows, columns);
    for (int i = 0; i < rows; i++) {
        free(map[i]);
    }
    free(map);
    return 0;
}