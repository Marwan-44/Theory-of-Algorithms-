#include <iostream>
using namespace std;

void printPyramid(int totalRows, int currentRow) {
    
    if (currentRow > totalRows) {
        return;
    }
    
    for (int i = 0; i < totalRows - currentRow; ++i) {
        cout << " ";
    }

    for (int i = 0; i < (2 * currentRow - 1); ++i) {
        cout << "*";
    }

    cout << endl;

    printPyramid(totalRows, currentRow + 1);
}

int main() {
    int x;
    cin>>x;

    printPyramid(x, 1);

    return 0;
}

