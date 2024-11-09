#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "Enter a character: ";
    cin >> a;
    if(a >= 'a' && a <= 'z') {
        cout << (char)(a-32) << endl;
    }
    else if(a >= 'A' && a <= 'Z') {
        cout << (int)(a) << endl;

    }

    return 0;
}
