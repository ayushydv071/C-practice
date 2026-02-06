#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    
    // Diamond star pattern
    // Upper half
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower half
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
