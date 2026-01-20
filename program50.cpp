#include<iostream>
using namespace std;
bool checkPrime(int n){
    bool isPrime = true;
    for (int i=2; i<n; i++){
        if (n%i==0){
            isPrime=false;
            break;
        
        }

    }

    return isPrime;
}
int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout << n << " Is a Prime Number" << endl;
    }else{
        cout << n << " Is not a Prime Number" << endl;
    }
    return 0;
}