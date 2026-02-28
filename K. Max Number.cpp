#include <iostream>
using namespace std;

long long findMax(long long arr[], int x) {
    if (x == 1) {
        return arr[0];
    }

    return max(arr[x - 1], findMax(arr, x - 1));
}

int main() {
    int x;
    cin >> x;

    long long arr[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    cout << findMax(arr, x) << endl;

    return 0;
}