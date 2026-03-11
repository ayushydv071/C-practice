#include <iostream>
using namespace std;

void generate(char str[], int pos, int open, int close, int n) {

    // Base Case
    if (close == n) {
        str[pos] = '\0';   // end string
        cout << str << endl;
        return;
    }

    // Add open bracket
    if (open < n) {
        str[pos] = '(';
        generate(str, pos + 1, open + 1, close, n);
    }

    // Add close bracket
    if (close < open) {
        str[pos] = ')';
        generate(str, pos + 1, open, close + 1, n);
    }
}

int main() {
    int n;
    cout << "Enter number of pairs: ";
    cin >> n;

    char str[100];  // assuming n won't exceed 50
    generate(str, 0, 0, 0, n);

    return 0;
}