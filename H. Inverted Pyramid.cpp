#include <iostream>
using namespace std;

void printPyramid(int n, int spaces) {
    if (n == 0) {
        return;
    }

    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }

    for (int i = 0; i < (2 * n - 1); i++) {
        cout << "*";
    }

    cout<<endl;
    
    printPyramid(n - 1, spaces + 1);
}

int main() {
    int x;
    if (cin >> x) {
        printPyramid(x, 0);
    }
    return 0;
}