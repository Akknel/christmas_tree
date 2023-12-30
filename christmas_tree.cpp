#include <iostream>
using namespace std;

void tree(int h) {
    int size = 1;
    for (int i = h; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << " ";
        }
        for (int j = size; j > 0; j--) {
            cout << "*";
        }
        size += 2;
        cout << endl;
        if (i == 1) {
            for (int j = 0; j < 3; j++) {
                for (int k = h - 1; k > 0; k--) {
                    cout << " ";
                }
                for (int k = 0; k < 3; k++) {
                    cout << "|";
                }
                cout << endl;
            }
        }
    }
}

int main() {
    int height;
    cout << "Type the height of the Christmas tree: ";
    cin >> height;
    tree(height);
}