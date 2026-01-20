#include<iostream>
using namespace std;
int main (){
    int n;
    bool isPrime = true;
    cout << "Enter the number: ";
    cin>> n;
    for (int i=2; i*i <= n; i++){
        if (n%i==0){
            isPrime = false;
            break;

        }else{
            isPrime = true;
        }

    }
    if (isPrime == true){
        cout << n << " is a Prime number ";

    }else{
        cout << n << " is not a prime number ";
    }
    cout << endl;
    return 0;
}