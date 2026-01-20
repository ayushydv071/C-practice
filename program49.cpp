//program to calculate nCr method 2
#include<iostream>
using namespace std;
int Factorial(int n){
    int fact=1;
    for (int i=1; i<=n; i++){
        fact = fact *i;
    }
    return fact;
}
int nCr(int n, int r){
    int ncr = Factorial(n) / ((Factorial(r)) * Factorial(n - r));
    return ncr;
}
int main(){
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    cout << "ncr is: " << nCr(n, r) << endl;
    return 0;
}