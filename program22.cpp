#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin >> n;
    for (int i=2; i<n; i++){
        bool isPrime = true;
        for (int j=2; j*j<=i; j++){
            if (i%j==0){
                isPrime = false;
                break;
            }
        }
        if (isPrime==true){
            cout << i << ' ';
            sum += i;
        }
    }
    cout << "\n sum: " << sum << endl;
    return 0;
}