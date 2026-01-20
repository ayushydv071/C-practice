#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of terms in the series: ";
    cin >> n;
    for (int i = 1; i <= n; i=i+4){
        cout << i << " ";

    }
    cout << endl;
    return 0;
}