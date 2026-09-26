#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, 5, 6};
    int n = 4;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            cout << sum;
            if (j != n - 1) cout << ",";
        }

        cout << endl;
    }

    return 0;
}