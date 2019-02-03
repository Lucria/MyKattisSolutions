#include <iostream>

using namespace std;

int main() {
    int targetx, targety;
    cin >> targetx >> targety;
    int instructions;
    cin >> instructions;
    int x = 0;
    int y = 0;

    int face = 0; // 0 is up, 1 is left, 2 is down, 3 is right
        while(instructions--) {
        string command;
        cin >> command;
        if (command == "Forward") {
            switch(face) {
                case 0:
                    y += 1;
                    break;
                case 1:
                    x -= 1;
                    break;
                case 2:
                    y -= 1;
                    break;
                case 3:
                    x += 1;
                    break;
            }
        } else if (command == "Left") {
            face = (face + 1) % 4;
        } else if (command == "Right") {
            if (face == 0) {
                face = 3;
            } else {
                face = (face - 1);
            }
        }
    }
    cout << x << " " << y << endl;
    return 0;
}