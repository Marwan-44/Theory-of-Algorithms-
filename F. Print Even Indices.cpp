#include <iostream>
using namespace std;

void printEvenReversed(long long arr[], int n, int index) {
    if (index >= n) {
        return;
    }

    printEvenReversed(arr, n, index + 2);

    cout << arr[index] << " ";
}

int main() {
    int x;
    cin >> x;

    long long arr[x] ; 
    
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    printEvenReversed(arr, x, 0);
    
    cout << endl;
    return 0;
}