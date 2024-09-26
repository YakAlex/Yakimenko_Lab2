#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a;
    bool proste = true;

    cout << "Введіть число: ";
    cin >> a;
    if (a < 2) {
        proste = false;
    } else {
        for (int b = 2; b * b <= a; b++) {
            if (a % b == 0) {
                proste = false;
                break;
            }
        }
    }
    if (proste) {
        cout << "Число просте"<< endl;
    } else {
        cout << "Число не просте" << endl;
    }

    return 0;
}
