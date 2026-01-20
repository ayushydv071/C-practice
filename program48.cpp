//program to calculate nCr using functions
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;

    }
    return fact;
}
int main(){
    int n,r,ncr;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter r:";
    cin >> r;
    ncr = factorial(n) / (factorial(r) *  factorial(n-r));
    cout << "nCr is : " << ncr << endl;
    return 0;
}