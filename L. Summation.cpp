#include <iostream>
using namespace std;

long long calculateSum(long long arr[], int n) {
    if (n <= 0) {
        return 0;
    }

    return arr[n - 1] + calculateSum(arr, n - 1);
}

int main() {
    int x;
    cin>>x;
    
    long long arr[x]; 
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    cout << calculateSum(arr, x) << endl;

    return 0;
}