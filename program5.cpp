#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter any alphabet :";
    cin >> ch;
    if ('a' <= ch && ch <= 'z'){
        cout << "Lowercase alphabet" << endl;
    }else {
        cout << "Uppercase alphabet" << endl;

    }
    return 0;
}