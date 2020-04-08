#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
void print(int x, int y) {
    system("cls");
    for (int i = 0; i < y; i++) {
        cout.put('\n');
    }
    for (int j = 0; j < x; j++) {
        cout.put(' ');
    }
    cout << 'O' << endl;
}
int main() {
    const int right = 50;
    const int bottom = 20;
    int x = 1;
    int y = 1;
    int v_x = 2;
    int v_y = 1;
    while (true) {
        if (y > bottom || y < 1) {
            v_y = -v_y;
        }
        if (x > right || x < 1) {
            v_x = -v_x;
        }
        y += v_y;
        x += v_x;
        print(x, y);
        Sleep(20);
    }
    return 0;
}
