#include <iostream>
#include <cstdlib>
#include <ctime>    //随机数种子
#include <windows.h>
#include <conio.h>  //putch()无缓冲输入
using namespace std;
void print(int x, int y, int target, bool isFired) {
    system("cls");
    for (int i = 0; i < target; i++) {
        cout.put(' ');
    }
    cout << "@" << endl;
    //if (target != 0) {
    //    cout << "@" << endl;
    //} else {
    //    cout << " " << endl;
    //}
    if (isFired) {
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                cout.put(' ');
            }
            cout << "^" << endl;
        }
    } else {
        for (int i = 0; i < y; i++) {
            cout.put('\n');
        }
    }
    for (int j = 0; j < x; j++) {
        cout.put(' ');
    }
    cout << '*' << endl;
    for (int j = 0; j < x-2; j++) {
        cout.put(' ');
    }
    cout << "*****" << endl;
    for (int j = 0; j < x-1; j++) {
        cout.put(' ');
    }
    cout << "* *" << endl;
}
int main() {
    int x = 10;
    int y = 5;
    int target = 14;
    char input;
    bool isFired = false;
    print(x, y, target, isFired);
    while (input = getch()) {
        if (input == 'q') break;
        isFired = false;
        switch (input) {
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 'a':
            x -= 2;
            break;
        case 'd':
            x += 2;
            break;
        case ' ':
            isFired = true;
            if (x == target) {
                cout.put('\a');
                srand(static_cast<int>(time(nullptr)));
                target = (rand() % 20 + 1) * 2;
            }
        }
        print(x, y, target, isFired);
    }
    return 0;
}
