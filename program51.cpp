#include<iostream>
using namespace std;
void printPrime(int n){
    for (int i=1; i<=n; i++){
            bool isPrime=true;
        for (int j=2; j<i; j++){
            if (i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime==true){
            cout << i << " ";
        } 
    }

}
int main(){
    int n;
    cout << "Enter number :";
    cin >> n;
    cout << "Prime numbers are:";
    printPrime(n);
    cout << endl;
    return 0;

}