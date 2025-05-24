#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height: ";
    cin >> height;

    if (height >= 1 && height <= 5) {
        for (int i = 0; i < height; i++) {
            cout << "* ";
        }
    } else {
        cout << "Please enter a valid height." << endl;
    }

    return 0;
}
