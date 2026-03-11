#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++){

        
        cout << " ";
        }
        int width = 2 * i - 1;
        for (int j = 1; j <= width; j++) {
            if (i == 1 || j == 1 || j == width) 
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}