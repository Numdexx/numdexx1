#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "Введіть число A: ";
    cin >> A;

    cout << "Введіть число B: ";
    cin >> B;

    cout << "Введіть число C: ";
    cin >> C;

    
    cout << (A < B && B < C ? "Висловлювання вірне" : "Висловлювання хибне") << endl;

    return 0;
}